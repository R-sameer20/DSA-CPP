#include<iostream>
#include<math.h>
#define ll unsigned long long int
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n , c ;
        cin>>n>>c;
        ll alpha = 0 , beta = 0;
        for(int i = 0 ; i<n ; i++){
            ll x;
            cin>>x;
            alpha+=x;
            beta+=(x*x);
        }
        ll ans = 0;
        ll first = 0 , second = 0;
        first = -1*(alpha/n);
        second = sqrt(((first*first) + (c-beta )/n) );
        ans = (first + second) /2;
        cout<<ans<<"\n";
        
    }
}