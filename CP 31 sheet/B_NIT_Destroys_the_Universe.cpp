#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t ; 
    cin>>t;
    while(t--){
        long long n ; 
        cin>>n;
        vector<long long> arr(n);
        for(int i = 0 ; i<n ; i++){
          cin>>arr[i];  
        }
        long long current = 0;
        long long ans = 0;
        for(int i = 0 ; i<n ; i++){
            if(arr[i]!=0){
                current++;
            }
            else {
                if(current>0) ans++;
                current = 0;
                
            }

        }
        if(current>0) ans++;
        ans > 2 ? cout<<2<<endl : cout<<ans<<endl; 
        
        
    }
    return 0;

}