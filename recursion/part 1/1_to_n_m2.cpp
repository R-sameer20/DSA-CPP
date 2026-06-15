#include<iostream>
using namespace std;
void num(int n){
    if(n==0){
        return ;
    }
    else{
        num(n-1);
        cout<<n<<endl;
        
    }
}
int main(){
    int n ;
    cout<<"Enter the nunber: ";
    cin>>n;
    num(n);
}