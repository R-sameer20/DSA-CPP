#include<iostream>
using namespace std;
void swap(int a , int b){
    int temp = a;
    a=b;
    b=temp;
    return;
}

int main(){
    int a, b ;
    cout<<"enter a :";
    cin>>a;
    cout<<"enter b :";
    cin>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}


// no swaping because both have different memory only value is passed not reference