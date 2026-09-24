#include<iostream>
#include<cstring>
using namespace std;
#define ll long long int

ll dp[10005][5005];
ll arrC[10005];
ll arrA[10005];
int n;

ll f(int i , int x ){

    if(i == n) return 0;

    if(dp[i][x] !=-1) return dp[i][x];
    

    if(x == 0) return dp[i][x] = f(i+1 , x+1) + arrA[i];

    else if(x == n-i) return dp[i][x] = f(i+1 , x-1) + arrC[i];

    else return dp[i][x] = min(f(i+1 , x+1)+arrA[i] , f(i+1 , x-1)+arrC[i]);
}


int main(){
    cin>>n;

    for(int i = 0 ; i<n ; i++){
        cin>>arrC[i];
        cin>>arrA[i];
    }
    memset(dp , -1, sizeof(dp));
    cout<<arrA[0]+ f(1,1);
    return 0;

}