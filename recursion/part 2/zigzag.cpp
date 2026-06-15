#include<iostream>
using namespace std;
void zigzag(int n){
    if(n==0){
        return ;
    }
    else{
        cout<<n<<" ";
        zigzag(n-1);
        cout<<n<<" ";
        zigzag(n-1);
        cout<<n<<" ";
        zigzag(n-1);
    }
}
int main(){
    int n ; 
    cout<<"Enter number : ";
    cin>>n;
    cout<<endl;
    zigzag(n);
    cout<<endl;
}