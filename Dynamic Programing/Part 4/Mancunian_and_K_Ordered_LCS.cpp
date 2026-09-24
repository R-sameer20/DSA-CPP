// #include<iostream>
// #include<vector>
// #include<algorithm>
// #define ll long long int

// using namespace std;
// vector<int> arr , brr ;
// int n , m;

// vector<vector<vector<int>>> dp;


// int ftd(int i , int j , int k ){
//     if(i==n || j==m) return 0;
    
//     if(dp[i][j][k]!=-1) return dp[i][j][k];


//     int ans = 0;

//     if(arr[i] == brr[j]){
//         ans = 1  + ftd(i+1 , j+1 , k);
//     }

//     else{
//         if(k>0){
//             ans = 1 + ftd(i +1  , j+ 1 , k-1 );
//         }
//         ans = max(ans , ftd(i+1 , j  , k));
//         ans = max(ans , ftd(i , j+1 , k));
//     }
//     dp[i][j][k] = ans ;
//     return ans;
// }

// int main(){
//     int k;
//     cin>>n>>m>>k;

//     arr.clear();
//     arr.resize(n , 0);

//     brr.clear();
//     brr.resize(m, 0);

//     dp.clear();
//     dp.resize(n+5 , vector<vector<int>> (m+5 , vector<int>(k+5 , -1)));

//     for(int i = 0 ; i<n ; i++) cin>>arr[i];
//     for(int i = 0 ; i<m ; i++) cin>>brr[i];

//     cout<<ftd( 0 , 0 , k)<<"\n";
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// #include <cstring> 

// #define ll long long int

// using namespace std;
// ll dp[2005][2005][8];

// ll korderedLCS(int *a, int *b, int n, int m, int i, int j, int k) {
//     if(n == i or m == j) {
//         return 0;
//     }
    
//     if(dp[i][j][k] != -1) {
//         return dp[i][j][k];
//     }
    
//     ll res = 0;
    
//     if(a[i] == b[j]) {
//         res = 1 + korderedLCS(a, b, n, m, i+1, j+1, k);
//     } else {
//         if(k > 0) {
//             res = 1 + korderedLCS(a, b, n, m, i+1, j+1, k-1);
//         }
//         res = max(res, korderedLCS(a, b, n, m, i+1, j, k));
//         res = max(res, korderedLCS(a, b, n, m, i, j+1, k));
//     }
    
//     dp[i][j][k] = res;
//     return res;
// }

// int main() {
//     int n, m, k;
//     cin >> n >> m >> k;

//     if(k > 7) k = 7; 

//     int a[2005];
//     int b[2005];

//     for(int i = 0; i < n; i++) cin >> a[i];
//     for(int i = 0; i < m; i++) cin >> b[i];
//     memset(dp, -1, sizeof(dp));
//     cout << korderedLCS(a, b, n, m, 0, 0, k) << "\n";

//     return 0;
// }