#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> arr(n );
        for(int i = 0 ; i<n ; i++){
           cin>>arr[i];
        }
        long long ans = arr[n-1] - arr[0];
        for (int i =0; i < n; i++){
            if (i>0) ans=max(ans, arr[i] - arr[0]); 
            if (i<n-1) ans=max(ans, arr[n-1] - arr[i]);  
        }
        for (int i=0; i<n-1; i++){
            ans = max(ans, arr[i]-arr[i+1]);
        }
        cout<<ans<<endl;
        }
    return 0;

}