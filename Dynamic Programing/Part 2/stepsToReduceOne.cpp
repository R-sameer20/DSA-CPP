#include<iostream>
#include<vector>
#include <algorithm> 
#include <climits>
#define inf INT_MAX
using namespace std;

vector<int> dp;



// int noOfOperation(int n){
//     int op = 0;
//     while(n>1){
//         if(n%3==0){
//             n = n/3;
//             op+=1;
//         }
//         else if(n%2==0){
//             n= n/2;
//             op+=1;
//         }
//         else{
//             n = n - 1;
//             op+=1;
//         }
//     }
//     return op;
// }

// int f(int n){
//     if(n == 1) return 0;
//     if(n == 2 || n == 3) return 1;
//     return 1 + min({f(n-1), (n%2==0) ? f(n/2) : inf, (n%3==0) ? f(n/3) : inf}); 
// }


// top down 
int ftd(int n){
    if(n == 1) return 0;
    if(n == 2 || n == 3) return 1;
    if(dp[n]!=-1)return dp[n]; //if present then return 
    // if npot present then calculate
    return dp[n] =  1 + min({ftd(n-1), (n%2==0) ? ftd(n/2) : inf, (n%3==0) ? ftd(n/3) : inf}); 
}

// bottomUp
int fbu(int n){
    dp.clear();
    dp.resize(n+1 , 0);
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    for(int i = 4 ; i<=n ; i++){
        dp[i] =  1 + min({dp[i-1], (n%2==0) ? dp[i/2] : inf, (n%3==0) ? dp[i/3] : inf}); 
    }
    return dp[n];

}

int main(){ //max value of n = 1000
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    if(n>1000){
        cout<<"enter n less than 1000\n";
        return -1;
    }
    
    // method one wrong ans
    // int op = noOfOperation(n);
    // cout<<"Required Number of Operation  = "<<op;

    // method 2  simple recurrsion 
    // int op = f(n);
    // cout<<"Required Number of Operation  = "<<op;

    // method 3 top down
    dp.clear();
    dp.resize(1005, -1);
    cout<<"Required Number of Operation (top down approch)  = "<<ftd(n);
    cout<<endl;

    // method 4 bottom up 
    cout<<"Required Number of Operation (bottom up approch)  = "<<fbu(n);



}