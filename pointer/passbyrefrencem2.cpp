#include<iostream>
using namespace std;
void swap(int* x  , int* y){            //recive address of x and y via a and b
    int temp=*x;
    *x=(*y);
    *y=temp;
    return;
}
int main(){
    int x , y ;
                       
    cout<<"enter x : ";             //directly pass adresses not stored in another variable
    cin>>x;
    cout<<"enter y : ";
    cin>>y;
    swap(&x,&y);                      //address of x and y are passes directly
    cout<<"x ="<<" "<<x<<endl;
    cout<<"y ="<<" "<<y<<endl;
}