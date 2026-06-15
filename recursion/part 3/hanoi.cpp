#include<iostream>
using namespace std;
void hanoi(int n , char a  , char b , char c){
    if(n==0) return ;
    //position a=sourse
    //position b=helper
    //position c=destination
    hanoi(n-1, a , c , b);
    cout<<a<<" -> "<<c<<endl;
    hanoi(n-1, b , a , c);
}

int main(){
    int n ; 
    cout<<"Enter the number of disk in tower : ";
    cin>>n;
    hanoi(n,'A','B','C');
}