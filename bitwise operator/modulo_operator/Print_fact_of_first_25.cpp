#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n = 25;
    vector<long long int> v(n+1,1);
    int MOD = 1000000000 + 7;
    for(int i = 2 ; i<=n ; i++){
          v[i] = ((i%MOD )* (v[i-1]%MOD))%MOD;
    }
    int i = 0 ;
    while(i<=n){
       cout<<i<<"! = "<<v[i]<<endl;
       i++;
    }
    
        
        
}