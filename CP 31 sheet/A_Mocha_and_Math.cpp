#include<iostream>
using namespace std;
int main(){
    int t ;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ans = 0;

        for(int i = 0 ; i<n ; i++){
            long long val ;
            cin>>val;
           if(i == 0) ans = val;
           else ans = ans & val; 
        }
        cout<<ans<<endl;
    }
}