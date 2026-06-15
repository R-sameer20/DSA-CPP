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
            break;
        }
        else{
            cout<<"conditions dosent match";
            break;
        }  
     }
}