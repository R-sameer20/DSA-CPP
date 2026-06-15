#include<iostream>
using namespace std;
int main(){
    int a, b ;
    cout<<"enter a :";
    cin>>a;
    cout<<"enter b :";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b;
}