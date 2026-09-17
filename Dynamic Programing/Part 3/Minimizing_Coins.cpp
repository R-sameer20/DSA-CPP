#include<iostream>
#include<vector>
#include<climits>

#define inf INT_MAX
using namespace std;

vector<int> coin;
vector<int> dp;


int ftd(int x ){
    if(x == 0) return 0;
    if(dp[x]!=-2) return dp[x];
    int result = INT_MAX;

    for(int i = 0 ; i<coin.size() ; i++){
        if(x - coin[i] < 0) continue;
        result = min(result , ftd(x - coin[i]));
    }

    if(result == INT_MAX) return dp[x] = INT_MAX;

    return dp[x] = 1 + result;
}

// int fbu(int x) {
//     vector<int> dp(x + 1, INT_MAX);
//     dp[0] = 0;
//     for (int amount = 1; amount <= x; amount++) {
//         for (int i = 0; i < coin.size(); i++) {
//             if (amount - coin[i] >= 0) {
//                 if (dp[amount - coin[i]] != INT_MAX) {
//                     dp[amount] = min(dp[amount], 1 + dp[amount - coin[i]]);
//                 }
//             }
//         }
//     }
//     return dp[x] == INT_MAX ? -1 : dp[x];
// }


int main(){
    int n , x;
    cin>>n>>x;
    
    coin.resize(n);
    for(int i = 0 ; i<n ; i++){
        cin>>coin[i];
    }

    dp.assign(x + 1, -2);

    int result = ftd(x);
    result == INT_MAX ? cout<<"-1\n" : cout<<result<<"\n";
    return 0;

}