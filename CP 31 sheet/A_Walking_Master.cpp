#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, b,c,d;
        cin>>a>>b>>c>>d;
        
        if(d>=b && c-d<=a-b){
            int ans = -1;
            int updist = abs(d-b);
            int rightShift = a + updist;
            ans = updist+ abs(rightShift-c);
            cout<<ans<<endl;
            
        }
        else cout<<-1<<endl;
            
        
    }
    return 0;
}