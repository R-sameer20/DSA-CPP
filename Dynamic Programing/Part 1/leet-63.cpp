// class Solution {
// public:
//     int uniquePathsWithObstacles(vector<vector<int>>& arr) {
//         int m = arr.size() , n = arr[0].size();
//         if(arr[m-1][n-1] == 1 || arr[0][0] == 1) return 0;
//         vector<vector<int>> dp(m, vector<int>(n, 0));

//         for(int i = 0 ; i<m ; i++){
//             for(int j = 0 ; j<n ; j++){
//                 if(arr[i][j] == 1) dp[i][j]=-1;
//                 else continue ;
//             }
//         }
//         dp[0][0] = 1;

//         for(int i = 0 ; i<m ; i++){
//             for(int j = 0 ; j<n ; j++){
//                 if (i == 0 && j == 0) continue;

//                 if(i==0){
//                     if(dp[i][j] == -1 ) continue ;
                    
//                     else if(dp[i][j-1] == -1) dp[i][j] = -1;
//                     else dp[i][j] = 1;
//                 }
//                 else if(j == 0){
//                     if(dp[i][j] == -1 )  continue ;
//                     if(dp[i-1][j] == -1) dp[i][j] = -1;
//                     else dp[i][j] = 1;

//                 }
//                 else{
//                     if(dp[i][j] == -1) continue;
//                     int up = dp[i-1][j];
//                     int left = dp[i][j-1];

//                     if(up == -1 && left ==-1) dp[i][j] = -1;
//                     else if (up==-1) dp[i][j] = left;
//                     else if(left == -1) dp[i][j] = up;
//                     else dp[i][j] = up+left;
//                 }

                
//             }
//         }
//         return  dp[m-1][n-1]>0 ? dp[m-1][n-1] : 0 ;
//     }
// };