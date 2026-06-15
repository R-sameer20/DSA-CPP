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

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0][0]);
    int mx = 0;
    for(int i = 0 ; i<n ; i++){
        if(isPrime(arr[i][i])){
            mx = max(mx,(arr[i][i]));
        }
        if(isPrime(arr[i][n-i-1])){
            mx = max(mx,(arr[i][n-i-1]));
        }
    }
    cout<<mx;

//     // my code
//     int i = 0 , j = 2 ;
//     int Pmax = 0;
//     bool flag  = false;
//     int d1 = 0;
//     int d2 = 0;
//     while(i<3 && j>=0){
//         flag = isPrime(arr[i][i]);
//         if(flag==true) d1==arr[i][i];
      
//         flag = isPrime(arr[i][j]);
//         if(flag==true) d2 == arr[i][j];
//         Pmax = max(d1,d2);
//         flag = false;
//         i++;
//         j--;
//     }
//     cout<<Pmax;
}
