#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main(){
    int n = 99;
    n = n | (n>>1);
    n = n | (n>>2);
    n = n | (n>>4);
    n = n | (n>>8);
    n = n | (n>>16);
    cout<<(n+1)/2<<endl;
    int ans = (n+1)>>1;
    cout<<ans;

    //method 1
    // int temp = 0;
    // while(n>0){
    //     temp = n;
    //     n = (n & (n-1));
    // }
    // cout<<"Power of 2 just smaller then n = "<<temp<<endl;
    // cout<<"Power of 2 just greater then n = "<<temp*2;


    
}