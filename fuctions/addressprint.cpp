#include<iostream>
using namespace std;

void fun(int x , int y){
    cout<<"address of x is :"<<&x<<endl;
    cout<<"address of y is :"<<&y;
}
int main(){
    int x, y ; 
    cout<<"enter x :";
    cin>>x;
    cout<<"enter y :";
    cin>>y;
    cout<<x<<endl<<y<<endl;
    fun(x,y);
}