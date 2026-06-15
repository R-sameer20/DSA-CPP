#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<" enter the number:";
     cin>>n;
     for(int i=2 ; i<=n-1 ; i++){
        if(n%i==0){
            cout<<n<<" "<<"is a composit number";
            cout<<endl;
        }
        else{
            cout<<"conditions dosent match";
        }
     }
}
//here break dosent used therefore loop run as many time as  the entered number is composit
//simply run as multiple to the factor of entered number