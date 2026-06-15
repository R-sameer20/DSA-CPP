#include<iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        int ans = n*fact(n-1);
        return ans;
    }
}
int main(){
    int n ;
    cout<<"Enter the nunber whose factorial req : ";
    cin>>n;
    cout<<fact(n);
}