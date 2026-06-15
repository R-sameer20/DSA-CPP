#include<iostream>
using namespace std;
int main(){
    int n;
    bool flag = true;
    cout<<" enter the number:";
    cin>>n;
    int i ;
    if(n==2){
            cout<<"2 is a prime number";
    }
    if(n==1){
            cout<<"1 is nither prime nor composit number";
    }
    for(int i=2 ; i<=n-1 ; i++){
        if(n%i==0){
            flag = false ;
            break;
        }

        if( flag == true){
            cout<<n<<" "<<"is a prime number";
            break;
        }
        else{
            cout<<n<<" "<<"is a prime number";
            break;
        }
    
  }

}