#include<iostream>
using namespace std;
// int power(int a , int b){
//     if(a==0 && b==0){
//         cout<<"input valid a and b";
//         return -1;
//     }
//     if(b==1){
//         return a;
//     }
//     else if(b==0){
//         return 1;
//     }
//     else{
//         int p = a*power(a,b-1);
//         return p;
//     }
    
// }
int power(int a , int b){
    if(b==0){
        return 1;
    }
    else{
        return a*power(a,b-1);
    }
}
int main(){
    int a , b;
    cout<<"base = ";
    cin>>a;
    cout<<"\npower =";
    cin>>b;
    cout<<a<<" raised to power "<<b <<" = "<<power(a,b);
}