#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long > ans;
        long long higestPowerOf2 = 0;
        long long i = 1;
        while(i<n){
            i*=2;
            if(i<=n-1) higestPowerOf2 = i;   
        }
        long long j = higestPowerOf2 -1 ;
        while(j >=0 ){
            cout<<j<<" ";
            // ans.push_back(j);
            j--;
        }
    
        j = higestPowerOf2 ;
        while(j<n){
            cout<<j<<" ";
            // ans.push_back(j);
            j++;
        }
        cout<<endl;
    }
    return 0;
}