# Creates test cases, compresses and decompresses with huffman.exe, verifies outputs
$exe = Join-Path (Get-Location) "huffman.exe"
if (-not (Test-Path $exe)) { Write-Error "huffman.exe not found in working dir"; exit 2 }

$tests = @()

# Empty file
New-Item -Path empty.txt -ItemType File -Force | Out-Null
$tests += @{ name = 'empty.txt'; expected = 'empty.txt' }

# Single character repeated
Set-Content -Path single.txt -Value ('A' * 1024) -Encoding ASCII
$tests += @{ name = 'single.txt'; expected = 'single.txt' }

# Regular text with repetition
$text = "This is a test message for Huffman encoding. `n" * 50
Set-Content -Path text.txt -Value $text -Encoding UTF8
$tests += @{ name = 'text.txt'; expected = 'text.txt' }

# Binary file (256 random bytes)
$rng = New-Object System.Random
$bytes = New-Object byte[] 512
$rng.NextBytes($bytes)
[System.IO.File]::WriteAllBytes('binary.bin', $bytes)
$tests += @{ name = 'binary.bin'; expected = 'binary.bin' }

$results = @()
foreach ($t in $tests) {
    $in = $t.name
    $huf = "$($in).huf"
    $out = "$($in).out"
    Write-Host "Testing:" $in
    & $exe compress $in $huf
    if ($LASTEXITCODE -ne 0) { Write-Host "  compress FAILED"; $results += @{test=$in; ok=$false; stage='compress'}; continue }
    & $exe decompress $huf $out
    if ($LASTEXITCODE -ne 0) { Write-Host "  decompress FAILED"; $results += @{test=$in; ok=$false; stage='decompress'}; continue }

    $h1 = Get-FileHash -Path $in -Algorithm SHA256
    $h2 = Get-FileHash -Path $out -Algorithm SHA256
    if ($h1.Hash -eq $h2.Hash) { Write-Host "  OK: match"; $results += @{test=$in; ok=$true} }
    else { Write-Host "  MISMATCH"; $results += @{test=$in; ok=$false; stage='mismatch'} }
}

$passed = ($results | Where-Object { $_.ok } ).Count
$total  = $results.Count
Write-Host "`nSummary: $passed / $total tests passed"
if ($passed -ne $total) { exit 1 } else { exit 0 }
