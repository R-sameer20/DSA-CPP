#include<iostream>
using namespace std;
int main(){
    int x=9;
    int* p=&x;
    cout<<x<<endl;
    cout<<&x<<endl<<endl; ///address of x will not change 

    *p=88256;
    cout<<x<<endl;
    cout<<&x<<endl<<endl; //can excess and change the value of integer
    
}