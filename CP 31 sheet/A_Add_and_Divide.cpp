#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a , b;
        cin>>a>>b;
        long long ans = INT_MAX;
        for(long long add = 0 ; add<32 ; add++){
            long long op = add;
            long long newB = b+add;
            if(newB == 1)  continue;
            long long copyOfA = a;
            while(copyOfA > 0){
                copyOfA /= newB;
                op++;
            }
            ans = min(ans , op);
            
        }
        cout<<ans<<"\n";
    }
}
