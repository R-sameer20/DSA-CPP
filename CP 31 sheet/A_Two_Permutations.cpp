#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , a , b ;
        cin>>n>>a>>b;
        if((a==n && b==n) || (n - (a+b)) > 1  ) cout<<"Yes\n";
        else cout<<"No\n";
    }
}
