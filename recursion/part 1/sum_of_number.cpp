#include<iostream>
using namespace std;
int sum(int n , int s){
    if(n==0){
        cout<<s<<endl;
        return 0;
    }
    else{
        sum(s=n,n-1);
    }
    
}
int main(){
    int n ;
    cout<<"Enter the nunber: ";
    cin>>n;
    cout<<endl;
    cout<<sum(n,0);
    cout<<"\nn="<<n;
}