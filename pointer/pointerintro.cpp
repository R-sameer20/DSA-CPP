#include<iostream>
using namespace std;
int main(){
    int x=9;
    int* p1 = &x;
    
    cout<<&x<<endl; //printing adress
    
    cout<<p1<<endl;  //adress of x is stored in pointer p

    cout<<*p1<<endl<<endl; //excssing value of x through p pointer


    bool r = true;
    bool* p2=&r;
    
    cout<<&r<<endl; 
    
    cout<<p2<<endl;  

    cout<<*p2<<endl<<endl;


    char ch = 't';
    char* p3=&ch;
    
    cout<<&ch<<endl; 
    
    cout<<p3<<endl;  

    cout<<*p3<<endl<<endl;


    float a = 222.88;
    float* p4=&a;
    
    cout<<&a<<endl; 
    
    cout<<p4<<endl;  

    cout<<*p4<<endl<<endl;


}