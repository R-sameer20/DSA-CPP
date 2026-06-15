#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int last_digit = 0;
    int sum = 0;
    while(n>0){
    last_digit=n%10;
    sum+=last_digit;
    n/=10;
   }
   cout<<"sum of number is"<<"  " <<sum;
}