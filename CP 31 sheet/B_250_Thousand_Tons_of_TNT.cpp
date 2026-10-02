#include<iostream>
#include<vector>
#define ll long long int
using namespace std;


int main(){
    int t;
    cin>>t;
    while( t--){
        ll n;
        cin>>n;
        vector<ll> arr(n+2 , 0);
        cin>>arr[1];
        ll mn = arr[1] ;
        ll mx = arr[1] ;
        ll ans =  abs(mx - mn);
        for(int i = 2 ; i<=n ; i++ ){
            cin>>arr[i];
            mn = min(mn , arr[i]);
            mx = max(mx , arr[i]);
            arr[i] = arr[i]+arr[i-1];
        }
        ans = max(ans , abs(mn - mx));

        // my loop 1 to n/2 
        for(int i = 1 ; i<=n/2 ; i++){
            if(n%i==0){
                mn = arr[i];
                mx = arr[i];
                ans = max(ans , abs(mx - mn));
                for(int j = i*2 ; j<=n ; j+=i){
                    mn = min(mn , abs(arr[j] - arr[j-i]));
                    mx = max(mx , abs(arr[j] - arr[j-i]));
                }
                ans = max(ans , abs(mn - mx));
            }
        }


        // more optimize traversal (factor lies in range root n )
        // if i is divisor then n/i is also a divisor 
        // that is divisor always come in pair 
        // for(int i = 1 ; i * i <= n ; i++){
        //     if(n % i == 0){
        //         mn = arr[i];
        //         mx = arr[i];
        //         for(int j = i * 2 ; j <= n ; j += i){
        //             mn = min(mn , arr[j] - arr[j-i]);
        //             mx = max(mx , arr[j] - arr[j-i]);
        //         }
        //         ans = max(ans , mx - mn);
        //         int i2 = n / i;
        //         if(i2 != i && i2 != n){ 
        //             mn = arr[i2];
        //             mx = arr[i2];
        //             for(int j = i2 * 2 ; j <= n ; j += i2){
        //                 mn = min(mn , arr[j] - arr[j-i2]);
        //                 mx = max(mx , arr[j] - arr[j-i2]);
        //             }
        //             ans = max(ans , mx - mn);
        //         }
        //     }
        // }
        
        
        cout<<ans<<"\n";
        

    }
    return 0;
}