#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a , b;
        cin>>a>>b;
        long long temp = a-1;
        long long xorSum = 0;

        if(temp %4 == 0) xorSum = a-1;
        else if (temp %4 == 1) xorSum = 1;
        else if (temp %4 == 2) xorSum = a;
        else xorSum = 0;

        if(xorSum == b) cout<<a<<"\n";
        else {
            if((xorSum^b) == a && xorSum!=b)  cout<<a+2<<"\n";
            else cout<<a+1<<"\n";
        }    
    }
    return 0 ;
}