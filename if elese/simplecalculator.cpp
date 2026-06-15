#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter the opration:";cout<<"  ";
    cin>>n;
    char ch;
    cin>>ch;
    int m;
    cin>>m;
    if(ch=='+'){
        cout<<"the addition of the number is :";
        cout<<"  ";
        cout<<n+m;
    }
    if(ch=='-'){
        cout<<"the subtraction of the number is :";
        cout<<"  ";
        cout<<n-m;
    }
    if(ch=='*'){
        cout<<"the multiplication of the number is :";
        cout<<"  ";
        cout<<n*m;
    }
    if(ch=='/'){
        cout<<"the division of the number is :";
        cout<<"  ";
        cout<<n/m;
    }
    
}
    