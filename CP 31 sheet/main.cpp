#include<iostream>
#include<algorithm> 
using namespace std;

int main() {
   int n = 1 ; 
   if( n++ ||  1) cout<<"yes";
   else cout<<"no";
   cout<<n ;

    return 0;
}