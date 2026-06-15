#include<iostream>
using namespace std;
int main(){
    int n = 63;
    if(n==0) cout<<"not ugly"; 
    while(n%2==0) n/=2;
    while (n%3==0) n/=3;
    while (n%5==0) n/=5;
    if(n==1) cout<<"ugly"; // 2 3 5 is only prime factor
    else cout<<"not ugly";  // 2 3 5 is not the only prime factor
}