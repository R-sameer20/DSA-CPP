#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int 
using namespace std;


// core logic -> if a bit turn on we can never off it using and operation 
// hence select only those number which yield original x on doing or operation with x itself
void helper(vector<ll> &arr , ll &ans , ll &n , ll x){
    for(int i = 0 ; i<n ; i++){
        if((arr[i] | x)!=x) return ;
        ans|=arr[i];
    }
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n , x;
        cin>>n>>x;
        vector<ll> a(n) , b(n) , c(n) ;
        ll ansA = 0 , ansB = 0 , ansC = 0;
        for(int i = 0 ; i<n ; i++)  cin>>a[i];
        for(int i = 0 ; i<n ; i++) cin>>b[i];
        for(int i = 0 ; i<n ; i++) cin>>c[i];
        
        ll ans = 0;
        helper(a , ans , n , x);
        helper(b , ans , n , x);
        helper(c , ans , n , x);
        if(ans == x) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}