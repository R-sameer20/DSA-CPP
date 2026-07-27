#include<iostream>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        // if((n&(n-1))==0) cout << "NO\n";
        // else cout << "YES\n"; 
           
        
        while(n>0 && (n&1) ==0){
            n = n>>1;
        }
        if(n > 1 && n%2!=0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}