#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

        // 1+(x-1)+(x-1)......ntime >= k+(y+k)
        // n = (k(y+1) - 1 ) (x-1)
        // ans = n + k = k(x+y)/(x-1)
        // cellinf a/b = (a+b-1)/b
        long long x , y , k ;
        cin>>x>>y>>k;
        long long ans = 0;
        ans+= (k*(x+y)+(x-3));
        ans/=(x-1);
        cout<<ans<<"\n";
    }
}