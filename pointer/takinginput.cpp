#include<iostream>
using namespace std;
int main(){
    int x ,y ;
    int* p1=&x;
    int* p2=&y;
    cout<<"enter first number :";
    cin>>*p1;                           //taking input through pointer
    cout<<"enter second number :";
    cin>>*p2;
    cout<<endl<<endl;
 

    cout<<"direct sum :";
    cout<<x+y<<endl<<endl;  
    cout<<"using pointer :";
    cout<<(*p1)+(*p2)<<endl<<endl;  //adding intiger excessing through pointer
}