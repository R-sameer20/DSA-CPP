#include<iostream>
#include<math.h>
using namespace std;
int fact = 0;
bool isPrime(int n){
    if(n==1) return false;
    else{
        for(int i = 2 ; i<sqrt(n) ; i++){
            if (n%i==0){
                fact=i;
                return false;
            }   
        }
        return true;
    }
}
int main(){
    cout<<isPrime(527415631);
    cout<<endl<<fact;
}