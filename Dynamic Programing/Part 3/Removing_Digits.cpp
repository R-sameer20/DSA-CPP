#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

// #define inf INT_MAX

using namespace std;
vector<int> dp;

// int f(int n) {
//     if (n == 0) return 0;
//     if (n < 10) return 1;
//     if (n >= 10 && n < 100) {
//         int d1 = n % 10;
//         int d2 = (n / 10) % 10;   
//         return 1 + min({
//             d1 != 0 ? f(n - d1) : inf, 
//             d2 != 0 ? f(n - d2) : inf
//         });
//     }    
//     if (n >= 100 && n < 1000) {
//         int d1 = n % 10;
//         int d2 = (n / 10) % 10;
//         int d3 = (n / 100) % 10;       
//         return 1 + min({ 
//             d1 != 0 ? f(n - d1) : inf, 
//             d2 != 0 ? f(n - d2) : inf,
//             d3 != 0 ? f(n - d3) : inf
//         });
//     }    
//     if (n >= 1000 && n < 10000) {
//         int d1 = n % 10;
//         int d2 = (n / 10) % 10;
//         int d3 = (n / 100) % 10;
//         int d4 = (n / 1000) % 10;       
//         return 1 + min({
//             d1 != 0 ? f(n - d1) : inf, 
//             d2 != 0 ? f(n - d2) : inf,
//             d3 != 0 ? f(n - d3) : inf,
//             d4 != 0 ? f(n - d4) : inf
//         });
//     }    
//     if (n >= 10000 && n < 100000) {
//         int d1 = n % 10;
//         int d2 = (n / 10) % 10;
//         int d3 = (n / 100) % 10;
//         int d4 = (n / 1000) % 10;
//         int d5 = (n / 10000) % 10;       
//         return 1 + min({
//             d1 != 0 ? f(n - d1) : inf, 
//             d2 != 0 ? f(n - d2) : inf,
//             d3 != 0 ? f(n - d3) : inf,
//             d4 != 0 ? f(n - d4) : inf,
//             d5 != 0 ? f(n - d5) : inf
//         });
//     }
//     if (n >= 100000 && n <= 999999) {
//         int d1 = n % 10;
//         int d2 = (n / 10) % 10;
//         int d3 = (n / 100) % 10;
//         int d4 = (n / 1000) % 10;
//         int d5 = (n / 10000) % 10;
//         int d6 = (n / 100000) % 10;       
//         return 1 + min({
//             d1 != 0 ? f(n - d1) : inf, 
//             d2 != 0 ? f(n - d2) : inf,
//             d3 != 0 ? f(n - d3) : inf,
//             d4 != 0 ? f(n - d4) : inf,
//             d5 != 0 ? f(n - d5) : inf ,
//             d6 != 0 ? f(n - d6) : inf 
//         });
//     }  
//     return 0; 
// } 
// vector<int>
// int f(int n){
//     if(n == 0 )return 0;
//     if(n ==1 ) return 1;
// }

// int f(int n) {
//     if (n == 0) return 0;
//     if (n < 10) return 1;
//     if(dp[n] != -1) return dp[n];
//     if (n >= 10 && n < 100) {
//         int d1 = n % 10;
//         int d2 = (n / 10) % 10;
//         return dp[n] =  1 + min({
//             d1 != 0 ? f(n - d1) : inf, 
//             d2 != 0 ? f(n - d2) : inf
//         });
//     }
//     if (n >= 100 && n < 1000) {
//         int d1 = n % 10;
//         int d2 = (n / 10) % 10;
//         int d3 = (n / 100) % 10;        
//         return dp[n] = 1 + min({ 
//             d1 != 0 ? f(n - d1) : inf, 
//             d2 != 0 ? f(n - d2) : inf,
//             d3 != 0 ? f(n - d3) : inf
//         });
//     }
//     if (n >= 1000 && n < 10000) {
//         int d1 = n % 10;
//         int d2 = (n / 10) % 10;
//         int d3 = (n / 100) % 10;
//         int d4 = (n / 1000) % 10;
//         return dp[n] = 1 + min({
//             d1 != 0 ? f(n - d1) : inf, 
//             d2 != 0 ? f(n - d2) : inf,
//             d3 != 0 ? f(n - d3) : inf,
//             d4 != 0 ? f(n - d4) : inf
//         });
//     }
//     if (n >= 10000 && n < 100000) {
//         int d1 = n % 10;
//         int d2 = (n / 10) % 10;
//         int d3 = (n / 100) % 10;
//         int d4 = (n / 1000) % 10;
//         int d5 = (n / 10000) % 10;
//         return dp[n] = 1 + min({
//             d1 != 0 ? f(n - d1) : inf, 
//             d2 != 0 ? f(n - d2) : inf,
//             d3 != 0 ? f(n - d3) : inf,
//             d4 != 0 ? f(n - d4) : inf,
//             d5 != 0 ? f(n - d5) : inf
//         });
//     }
//     if (n >= 100000 && n <= 999999) {
//         int d1 = n % 10;
//         int d2 = (n / 10) % 10;
//         int d3 = (n / 100) % 10;
//         int d4 = (n / 1000) % 10;
//         int d5 = (n / 10000) % 10;
//         int d6 = (n / 100000) % 10;
//         return dp[n] = 1 + min({
//             d1 != 0 ? f(n - d1) : inf, 
//             d2 != 0 ? f(n - d2) : inf,
//             d3 != 0 ? f(n - d3) : inf,
//             d4 != 0 ? f(n - d4) : inf,
//             d5 != 0 ? f(n - d5) : inf ,
//             d6 != 0 ? f(n - d6) : inf 
//         });
//     }   
//     return 0; 
// }

vector<int> get_digit(int n){
    vector<int> result ;
    while(n>0){
        if(n%10 != 0) result.push_back(n%10);
        n/=10;
    }
    return result;
}
int ftd(int n){
    if(n == 0 )return 0;
    if(n<= 9) return 1;
    if(dp[n]!= -1) return dp[n];
    vector<int> d = get_digit(n);
    int result = INT_MAX;
    for(int i = 0 ; i<d.size() ; i++){
        result = min(result , ftd(n - d[i]));
    }
    return dp[n] = 1+ result;
}

int fbu(int num){
    dp[0] = 0;
    for(int i = 1 ; i<=9 ; i++) dp[i] = 1;
    for(int n = 10 ; n<=num ; n++){ //<- n are states
        vector<int> d = get_digit(n);
        int result = INT_MAX;
        for(int i = 0 ; i< d.size() ; i++){
            result = min(result , dp[n - d[i]]);
        }
        dp[n] = 1 + result;
    }
    return dp[num];
}


int main(){
    int n;
    // cout<<"enter Number n :" ;
    cin>>n;

    // method 1
    // cout<<"\nMethod 1 ans : ";
    // cout<<f(27);
    // cout<<endl;

    // method 2
    // dp.clear();
    // dp.resize(n+1 , -1);
    // cout<<"\nMethod 2 ans : ";
    // cout<<f(n);
    // cout<<endl;

    //method 3;
    dp.clear();
    dp.resize(1000005 , -1);
    cout<<ftd(n)<<"\n";
    cout<<"\n\n";

    // method4 bottom up 
    dp.clear();
    dp.resize(1000005 , -1);
    cout<<fbu(n)<<"\n";
    return 0;

}