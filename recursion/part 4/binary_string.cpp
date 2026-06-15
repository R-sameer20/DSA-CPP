#include<iostream>
#include<vector>
#include<string>
using namespace std;
void binary(string ans , int k){
    if(k==0){
        cout<<ans<<endl;
        return ;
    }
    binary(ans+'0',k-1);   
    if(ans=="" || ans[ans.size()-1]=='0')  binary(ans+'1',k-1);
}
int main(){
    int k = 5;
    binary("",k);
}