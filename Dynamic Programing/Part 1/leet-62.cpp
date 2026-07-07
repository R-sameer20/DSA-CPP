// class Solution {
// public:
//     int helper (int sr , int sc , int er , int ec){
//         if(sr ==er || sc==ec) return 1;
//         if(sr>er || sc>ec)return 0;
//         int rightWays = helper(sr , sc+1 , er , ec);
//         int downWays = helper (sr+1 , sc , er , ec);
//         return rightWays + downWays ;



//     }
//     int uniquePaths(int m, int n) {
//         return helper(0,0,m-1,n-1);
        
//     }
// };



// class Solution {
// public:
//     // int helper (int sr , int sc , int er , int ec){
//     //     if(sr ==er || sc==ec) return 1;
//     //     if(sr>er || sc>ec)return 0;
//     //     int rightWays = helper(sr , sc+1 , er , ec);
//     //     int downWays = helper (sr+1 , sc , er , ec);
//     //     return rightWays + downWays ;

//     // }
//     int uniquePaths(int m, int n) {
//         //return helper(0,0,m-1,n-1);
//         if(m==1 && n==1) return 1;
//         if(m==0 || n==0) return 0;
//         return uniquePaths(m-1 , n) + uniquePaths(m,n-1);

        
//     }
// };

// class Solution {
// public:
//     int helper (int sr , int sc , int er , int ec , vector<vector<int>>& dp){
//         if(sr ==er || sc==ec) return 1;
//         if(sr>er || sc>ec)return 0;
//         if(dp[sr][sc]!=-1) return dp[sr][sc];
//         return dp[sr][sc] = helper(sr , sc+1 , er , ec , dp) + helper (sr+1 , sc , er , ec , dp);

//     }
//     int uniquePaths(int m, int n) {
//         vector<vector<int>> dp(m,vector<int>(n,-1));
//         return helper(0,0,m-1,n-1 , dp);
      
        
//     }
// };


// class Solution {
// public:
    
//     int uniquePaths(int m, int n) {
//         int dp[m][n];
//         for(int i = 0 ; i<m ; i++){
//             for(int j = 0 ; j<n ; j++){
//                 if(i==0 || j==0) dp[i][j]= 1;
//                 else dp[i][j] = dp[i-1][j]+dp[i][j-1];
//             }
//         }
//         return dp[m-1][n-1];
      
        
//     }
// };