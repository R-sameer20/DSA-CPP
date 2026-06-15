#include<iostream>
using namespace std;
//self written
// int pow(int a , int b){
//     if(b==1){
//         return a;
//     }
//     else{
//         if(b%2!=0){
//             return pow(a,b/2)*pow(a,(b/2)+1);
//         }
//         else{
//             return pow(a,b/2)*pow(a,b/2);
//         }
//     }
  
// }
int pow(int a , int b){
    if(b==1){
        return a;
    }
    else{
        int ans =pow(a,b/2);
        if(b%2!=0){
            return ans*pow(a,(b/2)+1);
        }
        else{
            int ans =pow(a,b/2);
            return ans*ans;
        }
    }
  
}

int main(){
int a , b;
cout<<"Enter a and b such that a power b : \n";
cout<<"a = ";
cin>>a;
cout<<"\nb = ";
cin>>b;
int result = pow(a,b);
cout<<"\na power b equals "<<result;
}