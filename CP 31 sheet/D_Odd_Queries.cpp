#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n , q;
        cin>>n>>q;
        vector<long long> pre(n+1, 0);
        for (int i = 1; i <= n; i++) {
            int val;
            cin >> val;
            pre[i] = pre[i-1] + val;
        }
        while(q--){
            long long l , r , k;
            cin>>l>>r>>k;
            long long  insertSum = (r-l+1)*k;
            long long ans = pre[n] - (pre[r] - pre[l - 1]) + insertSum;
            if(ans%2 != 0) cout<<"YES\n";
            else cout<<"NO\n";
        }


    }
    return 0;
}
// void check(long long n,set<long long> &evenIdx , set<long long> &oddIdx , long long &even , long long &odd){
//     long long l , r , k ; 
//     cin>>l>>r>>k;
//     long long oddAdded = r - l + 1;
//     int i = 1;
//     int j = r+1;
//     int evenCount = 0  , oddCount = 0;
//     while(i<l){
//         if(evenIdx.find(i) != evenIdx.end()) evenCount++;
//         if(oddIdx.find(i) != oddIdx.end()) oddCount++;
//         i++;
//     }
//     while(j<n){
//         if(evenIdx.find(j) != evenIdx.end()) evenCount++;
//         if(oddIdx.find(j) != oddIdx.end()) oddCount++;
//         j++;
//     }
//     if(evenCount > 0){
//         if((oddCount + oddAdded )%2 != 0){
//             cout<<"YES\n";
//         }
//         else cout<<"NO\n";
//     }
//     else cout<<"NO\n";
//     return;
// }
// void solve(){
//     long long n , q; 
//     cin>>n>>q;
//     set<long long> evenIdx;
//     set<long long> oddIdx;
//     long long even = 0 , odd = 0;

//     for(int i = 1 ; i<=n ; i++){
//         long long val;
//         cin>>val;
//         if(val%2 == 0 ){
            
//         }
//         else{
//             oddIdx.insert(1);
//             odd++;
//         }   
//     }
//     while(q--){
//         check(n,evenIdx , oddIdx , even , odd );
//     }
//     return;

// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }