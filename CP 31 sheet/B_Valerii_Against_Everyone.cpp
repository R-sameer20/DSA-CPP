#include<iostream>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> unique;
        for(int i = 0 ; i<n ; i++){
            long long b;
            cin>>b;
            unique.insert(b);
        } 

        if(unique.size() == n ) cout<<"NO\n";
        else cout<<"YES\n";
    }
}