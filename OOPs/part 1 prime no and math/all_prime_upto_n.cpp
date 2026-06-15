#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
void fillseive(vector<bool> &seive){
    int n = seive.size();
    for(int i = 2 ; i<=sqrt(n) ; i++){
        for(int j = i*2 ; j<=n ; j+=i){
            seive[j]=0;
        }
    }
}
int main(){
    int n = 10 ,count = 0 ;
    if(n<=2){
    cout<<0;
    return 0 ;
}
    vector<int> v(n+1,0);
    v[0]=0;
    for(int i = 1;i<=n+1 ; i++){
        v[i]=i;
    }
   
    vector<bool> seive(n+1,1);
    
    fillseive(seive);
    seive[0] = 0;
    seive [1] = 0;
    for(int i = 2 ; i<=n; i++){
        if(seive[i]==1){
            cout<<i<<" ";
        }
    }
   

    
}