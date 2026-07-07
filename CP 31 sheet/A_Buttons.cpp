#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a , b , c;
        cin>>a>>b>>c;
        a = a+(c%2);
        if(a>b){
            cout<<"First\n";
        }
        else{
            cout<<"Second\n";
        }
    }
    return 0;
}