#include<iostream>
using namespace std;
void num(int i ,int n){
    if(i>n){
        return;
    }
    else{
        cout<<i<<endl;
        num(i+1,n);
    }
    
}
int main(){
    int n ;
    cout<<"Enter the nunber: ";
    cin>>n;
    cout<<endl;
    num(1,n);
}