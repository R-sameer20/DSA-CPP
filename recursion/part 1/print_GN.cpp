#include<iostream>
using namespace std;
void GM(int n){
    if(n==0){
        return;
    }
    else{
        cout<<"Good morning "<<endl;
        GM(n-1);
    }
}
int main(){
    int n ;
    cout<<"Enter the nunber of good morning you want : ";
    cin>>n;
    GM(n);
}