// class Solution {
// public:
//     double dp[30][30][110];
//     int m;
//     double f(int r , int c , int k ){
//         if(r < 0 || c < 0 || r >= m || c >= m) return 0;
//         if(k == 0) return 1;
//         if(dp[r][c][k] > -0.9) return dp[r][c][k];
//         return dp[r][c][k] = (f(r+2 ,c+1 , k-1) * 0.125  + 
//                             f(r+2,c-1 , k-1) * 0.125 +
//                             f(r-2 ,c+1 , k-1) * 0.125  + 
//                             f(r-2,c-1 , k-1) * 0.125  +
//                             f(r+1 ,c+2 , k-1) * 0.125 + 
//                             f(r-1,c+2 , k-1) * 0.125  + 
//                             f(r+1 ,c-2 , k-1) * 0.125 + 
//                             f(r-1,c-2 , k-1) * 0.125 
//                         );
//     }
//     double knightProbability(int n, int k, int row, int column) {
//         m = n;
//         memset(dp , -1 , sizeof dp);
//         return f(row, column, k);
//     }
// };



// class Solution {
// public:

//     double dp[30][30][105];
//     int dx[8] = {1,2,1,2,-1,-2,-1,-2};
//     int dy[8] = {2,1,-2,-1,2,1,-2,-1};
//     double f(int n , int i , int j , int k ){
//         if(i<0 || j<0 || i>=n || j>=n) return 0;
//         if(k == 0) return 1;
//         if(dp[i][j][k] > -0.9) return dp[i][j][k];

//         double ans = 0.0;
//         for(int m = 0 ; m<8 ; m++){
//             ans+=f(n , i+dx[m] , j+dy[m] , k-1)*(0.125);
//         }
//         return dp[i][j][k] =  ans;
//     }

//     double knightProbability(int n, int k, int row, int column) {
//         memset(dp , -1 , sizeof dp);
//         return f(n , row , column , k);
//     }
// };