#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int n){
    if(n==1) return false;
    else{
        for(int i = 2 ; i<sqrt(n) ; i++){
            if (n%i==0) return false;    
        }
        return true;
    }
}
int greatest_divicer(int n){
    for(int i = 2 ; i<=sqrt(n) ; i++){
        if(n%i==0) return n/i;
    }
    return 1;
}
int main(){
    int n = 26;
    int count = 0;
    while(n>1){
        if(isPrime(n)){
            count+=n;
            break;
        } 
        int higestFactor = greatest_divicer(n);
        count+=(n/higestFactor);
        n = higestFactor;
    }
    cout<<count;



    // if(n%2==0){
    //     int i = 1;
    //     while(n>0){
            
    //         if(n%(i*2)==0){
    //         count+=2;
    //         }
    //         else count++;
    //         n-i;
    //     }
      
    // }
    // cout<<count;
}