#include<iostream>
using namespace std;
int main(){
    int n , r ;
    cout<<"enter n :";
    cin>>n;
    cout<<"enter r :";
    cin>>r;
    int nfact=1;
    for(int i=2 ; i<=n ; i++){
        nfact*=i;
    }
    int rfact=1;
    for(int i=2 ; i<=r ; i++){
        rfact*=i;
    }
    int nrfact=1;
    for(int i=2 ; i<=n-r ; i++){
        nrfact*=i;
    }
    int ncr = nfact/(rfact*nrfact);
    cout<<"the ncr of n="<<n<<"and r="<<r<<"is "<<ncr;

}