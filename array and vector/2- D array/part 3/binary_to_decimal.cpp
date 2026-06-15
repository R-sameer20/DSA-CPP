#include<iostream>
#include<vector>
using namespace std;
int main(){
   int arr[]={1,1,1,0,1,0,1,0,1,0,1,0};
   int sum=0;
   int x=1;
   for(int i=12 ; i>=0 ; i-- ){
    sum+=arr[i]*x;
    x*=2;

   }
   cout<<sum;

}