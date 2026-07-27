#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  n , x;
        cin>>n>>x;
        long long mn = 0 , mx = 0 ;
        for(int i = 0 ; i<n ; i++){
            long long val;
            cin>>val;
            mn += val;
            mx += (val + x -1) /x;
        }
        cout<<(mn + x -1 )/x<<" "<<mx<<"\n";
    }
}