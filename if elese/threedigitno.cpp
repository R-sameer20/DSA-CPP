#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number:";
    cin>>x;
    if(x>=100 && x<=999){
        cout<<"number is three digit number ";
    }
    else{
        cout<<"not a three digit number";
    }
}