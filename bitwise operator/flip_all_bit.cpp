#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main(){
    int n = 8; //1000
    int k = n;
    n = n | (n>>1);
    n = n | (n>>2);
    n = n | (n>>4);
    n = n | (n>>8);
    n = n | (n>>16);
    int ans = (n^k); //X OR operation
    cout<<ans; //0111 = 7

  
    
}