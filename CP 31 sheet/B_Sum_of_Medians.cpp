#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n ,k;
        cin>>n>>k;
        long long ans = 0;
        vector<long long> arr(n*k + 1 );
        for(int i = 1 ; i<=n*k ; i++){
            cin>>arr[i];
        }
        long long median = (n + 2 - 1) / 2 ;
        long long steps = n - median +1;

        int idx = n*k-(steps-1);
        for(int count=0; count<k; count++) {
            ans+=arr[idx];
            idx -= steps;
        }

        // for(long long i = n*k - (steps - 1); i > (n - median )*k ; i-=steps){
        //     ans+=arr[i];
        // }
        cout<<ans<<"\n";

    }
    return 0;
}