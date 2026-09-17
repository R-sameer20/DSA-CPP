#include<iostream>
#include<vector>
#define MOD 1000000007
using namespace std;

vector<int> dice;
vector<int> dp;

int ftu(int n){
    if(n == 0) return 1;
    if(dp[n]!=-1) return dp[n];
    int sum = 0;
    for(int i = 0 ; i<dice.size() ; i++){
        if(n-dice[i] < 0 ) break;;
        sum = (sum % MOD + ftu(n - dice[i]) % MOD) % MOD;
    }
    return dp[n] = sum % MOD;
}

int fbu(int n){
    dp[0] = 1;
    for(int k = 1 ; k<=n ; k++){
        int sum = 0;
        for(int i = 0 ; i<dice.size() ; i++){
            if(k-i < 0 ) break;;
            sum = (sum % MOD + dp[k-i] % MOD) % MOD;
        }
        dp[k] = sum % MOD;
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    dice.clear();
    dice.resize(6 , 0);
    for(int i = 0 ; i<6 ; i++) dice[i] = i+1;

    dp.assign(n+5 , -1);
    int result = ftu(n);
    cout<<result<<endl;
    return 0;
}