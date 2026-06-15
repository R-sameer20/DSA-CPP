#include<iostream>
#include<math.h>
using namespace std;
// bool isPrime(int n){
//     if(n==1) return false;
//     else{
//         for(int i = 2 ; i<sqrt(n) ; i++){
//             if (n%i==0) return false;     
//         }
//         return true;
//     }
// }

//TC = O(n)
// void Printfactor(int n){
//     for(int i = 1 ; i<=n ; i++){
//         if(n%i==0){
//             cout<<i<<" ";
//         }
//     }
// }

//TC = O(sqrt(n))
// void Printfactor(int n){
//     for(int i = 1 ; i<=sqrt(n) ; i++){
//         if(n%i==0){
//             cout<<i<<" ";
//             if(i!=sqrt(n)) cout<<n/i<<" ";
//         }
//     }
// }

void Printfactor(int n){
    for(int i = 1 ; i<sqrt(n) ; i++){
        if(n%i==0) cout<<i<<" "; 
    }
    for(int i = sqrt(n); i>=0 ; i--){ 
        if(n%i==0) cout<<n/i<<" "; 
    }
}

int main(){
    Printfactor(100);
}