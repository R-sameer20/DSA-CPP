// my thought process
#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int 
using namespace std;
vector<ll> powerOfTwo(31 , 0);

ll twoPower(int num) {
    if (num == 0) return 0; 
    
    ll isolated_bit = num & -num; 
    return __builtin_ctz(isolated_bit); 
}

void f(){
    ll k = 1;
    for(int i = 0 ; i<=30 ; i++){
        powerOfTwo[i] = k;
        // k = k<<1;
        k <<= 1;
    }
}

void modifyArr(vector<ll> &a , ll k , ll &mxPower , ll &mx){
    for(int i = 0 ; i<a.size() ; i++){
        
        if(a[i]%powerOfTwo[k] == 0){
            a[i] = a[i]+powerOfTwo[k-1];

        }
        if(a[i] > mx){
            mx = max(mx , a[i]);
            mxPower = max(mxPower , twoPower(a[i]));
        }
    }
}


int main(){
    int t;
    cin>>t;
    while(t--){
        ll n , q;
        cin>>n>>q;
        ll mx = INT_MIN;
        ll mxPower = 0;
        f();
        vector<ll> a(n);
        vector<ll> x(q);
        for(int i = 0 ; i<n ; i++){
            cin>>a[i];
            if(a[i]%2==0){
                mxPower = max(mxPower , twoPower(a[i]));
            }    
        }
        for(int i = 0 ; i<q ; i++){
            cin>>x[i];
        }
        ll useFullQ = 100;
        for(int i = 0 ; i<q ; i++){
            if(x[i]<useFullQ && x[i] <= mxPower ){
                useFullQ = x[i];
                modifyArr(a , x[i] , mxPower , mx);
            }
        }

        for(auto x : a){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
    return 0;
}


// optimized
// #include <iostream>
// #include <vector>
// #define ll long long int 
// using namespace std;

// int main() {
//     // Fast I/O for competitive programming
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int t;
//     cin >> t;
//     while (t--) {
//         ll n, q;
//         cin >> n >> q;
        
//         vector<ll> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
        
//         // 31 is larger than any possible query, so the first query will always trigger
//         ll useFullQ = 31; 
        
//         for (int i = 0; i < q; i++) {
//             ll x;
//             cin >> x;
            
//             // Only process the query if it is strictly smaller than the smallest query seen so far
//             if (x < useFullQ) {
//                 useFullQ = x;
                
//                 ll divisor = (1LL << x);     // This is 2^x
//                 ll adder = (1LL << (x - 1)); // This is 2^(x-1)
                
//                 // Modify the array
//                 for (int j = 0; j < n; j++) {
//                     if (a[j] % divisor == 0) {
//                         a[j] += adder;
//                     }
//                 }
//             }
//         }

//         // Print the array
//         for (auto val : a) {
//             cout << val << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }