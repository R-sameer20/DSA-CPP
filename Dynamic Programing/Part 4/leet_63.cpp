// class Solution {
// public:
//     vector<vector<int>> dp;
    
//     int helper(int m, int n, vector<vector<int>>& arr) {
//         if(m < 0 || n < 0) return 0;
//         if(arr[m][n] == 1) return 0;
//         if(m == 0 && n == 0) return 1;
//         if(dp[m][n] != -1) return dp[m][n];
//         return dp[m][n] = helper(m - 1, n, arr) + helper(m, n - 1, arr);
//     }
    
//     int uniquePathsWithObstacles(vector<vector<int>>& arr) {
//         int m = arr.size();
//         int n = arr[0].size();
//         dp.clear();
//         dp.assign(m, vector<int>(n, -1));
//         return helper(m - 1, n - 1, arr);
//     }
// };

// class Solution {
// public:
//     vector<vector<long long>> dp;
//     int n , m;
//     vector<vector<int>> grid;
//     // int helper(int n, int m, vector<vector<int>>& arr) {
//     //     if(n < 0 || m < 0) return 0;
//     //     if(arr[n][m] == 1) return 0;
//     //     if(n == 0 && m == 0) return 1;
//     //     if(dp[n][m] != -1) return dp[n][m];
//     //     return dp[n][m] = helper(n - 1, m, arr) + helper(n, m - 1, arr);
//     // }

//     // int f(int i , int j){
//     //     if(i == n-1 && j == m -1) return 1;
//     //     if(i<0 || j<0 || i>=n || j>=m) return 0;
//     //     if(grid[i][j] == 1) return 0;
//     //     if(dp[i][j] != -1) return dp[i][j];
//     //     return dp[i][j] = f(i , j+1) + f(i+1 , j);

//     // }
    
//     int uniquePathsWithObstacles(vector<vector<int>>& arr) {
//         grid = arr;
//         n = arr.size();
//         m = arr[0].size();

        
//         dp.clear();
//         // dp.resize(100, vector<int>(100, -1));
//         vector<vector<long long>> dp(n, vector<long long>(m, 0));
//         if(arr[n-1][m-1] == 1) return 0;
//         // return helper(m - 1, n - 1, arr);

//         // return f(0 , 0);

//         dp[n-1][m-1] = 1;
//         for(int i = n-2 ; i>=0 ; i--){
//             if(arr[i][m-1] == 1) dp[i][m-1] = 0;
//             else dp[i][m-1] = dp[i+1][m-1];
//         }

//         for(int i = m-2 ; i>=0 ; i--){
//             if(arr[n-1][i] == 1) dp[n-1][i] = 0;
//             else dp[n-1][i] = dp[n-1][i+1];
//         }

//         for(int i = n-2 ; i>=0 ; i--){
//             for(int j = m-2 ; j>=0 ; j--){
//                 if(arr[i][j] == 1) dp[i][j]=0;
//                 else dp[i][j] = dp[i+1][j] + dp[i][j+1];
//             }
//         }

//         return dp[0][0];
//     }
// };