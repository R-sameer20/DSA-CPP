#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int count=0;
    if(count=0){
        cout<<1;
    }
    while(n>0){
        n/=10;
        count++;
    } cout<<count;
    
    }
   
 //method of remender is used where its store in memory of last digit  