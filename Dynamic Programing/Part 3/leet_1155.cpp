// class Solution {
// public:
// vector<vector<int>> dp;
// #define MOD 1000000007
//     int helper(int n, int k, int x ){
//         if(x == 0) return 1;
//         if(dp[n][k]!=-1) return dp[n][k];

//         int sum = 0;
//         int i = 1 , j = 1;
//         for(i = 1 ; i<=n ; i++){
//             for (j = 1 ; j<=k ; j++){
//                 sum = (sum % MOD + helper(i , k , x - j)%MOD)%MOD;
//             }
//             dp[i][j] = sum%MOD;
//         }
//         return dp[n][k]%MOD;
//     }
//     int numRollsToTarget(int n, int k, int target) {
//         dp.clear();
//         dp.assign(n + 1, vector<int>(k + 1, -1));
//         return helper(n , k , target);
//     }
// };