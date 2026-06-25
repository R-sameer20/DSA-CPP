#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    string x, s;
    cin >> x >> s;

    int count = 0;
    bool flag = false;

    for (int op = 0; op <= 6; op++) {
        if (x.contains(s)) {
            cout << count << "\n";
            flag = true;
             break;
        }
        x += x;
        count++;
    }

    if (!flag) {
        cout << -1 << "\n";
    }
}

int main() {
    
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}