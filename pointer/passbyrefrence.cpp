#include<iostream>
using namespace std;
void swap(int* x  , int* y){            //recive address of x and y via a and b
    int temp=*x;
    *x=(*y);
    *y=temp;
    cout<<endl<<x;
    cout<<endl<<y;
    cout<<endl<<"value of temp  "<<temp;
    cout<<endl;
    return;
}
int main(){
    int x , y ;
    int* a = &x;                    //address of x stored
    int* b = &y;                    //address of y stored
    cout<<"enter x : ";
    cin>>x;
    cout<<"enter y : ";
    cin>>y;
    swap(a,b);                      //address of x and y are passes
    cout<<"x ="<<" "<<x<<endl;
    cout<<"y ="<<" "<<y<<endl;

    int m , n;
    cout<<"\nEnter first number :";
    cin>>m;
    cout<<"\nEnter second number :";
    cin>>n;
    int* s = &m;
    int* r = &n;
    swap(s,r);
    cout<<"m ="<<" "<<m<<endl;
    cout<<"n ="<<" "<<n<<endl;
}
