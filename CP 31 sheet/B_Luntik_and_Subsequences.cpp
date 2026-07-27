#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int one = 0 , zero = 0;
        for(int i =  0 ; i<n ; i++){
            long long val;
            cin>>val;
            if(val == 0) zero++;
            else if (val == 1 ) one++;
        }
        long long ans = (long long )one<<zero;
        cout<<ans<<"\n";
        
    }
    return 0;
}
