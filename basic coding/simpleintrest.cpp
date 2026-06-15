#include<iostream>
using namespace std;
int main(){
    float p , r , t ;
    cout<<" Enter principal ammount:";
        cin>>p;
    cout<<" Enter rate:";
        cin>>r;
    cout<<" Enter time:";
        cin>>t;
    float si ;
        si=p*r*t/100;
    
    cout<<"simple intrest is : " <<si<<endl;
   
 cout<<"total ammount to paid = " << si+p;

}