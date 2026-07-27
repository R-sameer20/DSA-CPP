#include<iostream>
#include<vector>
#include<cmath>
#include<numeric>
using namespace std;
int main(){
    int t ; 
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            int val;
            cin >> val; 
            if (val != i) {
                ans = gcd(ans, abs(val - i));
            }
        }
        
        cout<<ans<<endl;
    }
    return 0;
}

// vector<int> arr(n);
//         for(int i = 0 ; i<n ; i++){
//             cin>>arr[i];
//         }
//         int ans = INT_MAX;
//         int currMin = 0;
//         for(int i = 0 ; i<n ; i++){
//             if(arr[i] != i+1){
//                 currMin = abs(arr[i] - (i+1));
//                 // ans = min(ans , currMin);
//                 ans = gcd(ans, currMin);
//             }
//         }