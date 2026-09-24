// class Solution {
// public:

//     vector<vector<int>> dp;
//     int n , m;

//     int ftd(string &s1 , string &s2 , int i , int j){
//         if(i == n || j == m ) return 0;
        
//         if(dp[i][j]!=-1) return dp[i][j];
//         if(s1[i] == s2[j]) return dp[i][j] =  1 + ftd(s1 , s2 , i+1 , j+1);
//         else return dp[i][j] =  max(ftd(s1 , s2 , i+1 , j) , ftd(s1 , s2 , i , j+1));
//     }
//     int longestCommonSubsequence(string text1, string text2) {
//         n = text1.size();
//         m = text2.size();

//         dp.clear();
//         dp.assign(n , vector<int>(m , -1));

//         return ftd(text1 , text2 , 0, 0);
//     }
// };