#include<iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        int s = n + sum(n-1);
        return s;
    }
    
}
int main(){
    int n ;
    cout<<"Enter the nunber: ";
    cin>>n;
    cout<<endl;
    cout<<"\nsum of first n number is "<<sum(n);
    cout<<"\nn="<<n;
}