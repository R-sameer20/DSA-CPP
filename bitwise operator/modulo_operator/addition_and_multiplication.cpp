#include<iostream>
using namespace std;
int main(){
   int n = INT32_MAX;
   cout<<(n*2)<<endl;
   cout<<(n*2)%5<<endl;
   cout<<(n%5 * 2%5 )%5<<endl;

   cout<<(n+n)%5<<endl;
   cout<<( n%5 + n%5 )%5<<endl;

   cout<<(22 - 14 )%5<<endl;
   cout<<((22%5) - (14%5) + 5)%5<<endl;     
}