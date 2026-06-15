#include<iostream>
using namespace std;
void num(int n){
    if(n==1){
        return ;
    }
    else{
        cout<<n<<endl;
        num(n-1);
    }
}
int main(){
    int n ;
    cout<<"Enter the nunber: ";
    cin>>n;
    num(n);
}