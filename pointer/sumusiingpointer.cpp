#include<iostream>
using namespace std;
int main(){
    int x ,y ;
    cout<<"enter first number :";
    cin>>x;
    cout<<"enter second number :";
    cin>>y;
    cout<<endl<<endl;
    int* p1=&x;
    int* p2=&y;

    cout<<"direct sum :";
    cout<<x+y<<endl<<endl;  //direct by adding intiger
    cout<<"using pointer :";
    cout<<(*p1)+(*p2)<<endl<<endl;  //adding intiger excessing through pointer
}