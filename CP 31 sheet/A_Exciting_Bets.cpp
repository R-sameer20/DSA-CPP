#include<iostream>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a , b;
        cin>>a>>b;
        long long gcd = abs(a - b);
        if(gcd == 0)cout<<0<<" "<<0<<"\n";
        else if (gcd == 1)cout<<1<<" "<<0<<"\n";
        else if(gcd == a || gcd == b) cout<<gcd<<" "<<0<<endl;
        else{
            long long moves = min((b%gcd) ,( gcd - (b%gcd)));
            cout<<gcd<<" "<<moves<<"\n";
        }
    }
    return 0;
}