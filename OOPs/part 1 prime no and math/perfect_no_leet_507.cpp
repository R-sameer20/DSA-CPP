#include<iostream>
#include<math.h>
using namespace std;
bool Printfactor(int n){
    int sum = 0;
    for(int i = 1 ; i<sqrt(n) ; i++){
        if(n%i==0) sum+=i; 
     
    }
    for(int i = sqrt(n); i>1 ; i--){ 
        if(n%i==0) sum+=(n/i);
       
    }
    return(sum==n);
}

int main(){
    cout<<Printfactor(100);
}