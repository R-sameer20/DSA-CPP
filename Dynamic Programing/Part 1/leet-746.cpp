// class Solution {
// public:
//     int helper(vector<int>& cost , int i ,vector<int>& dp ){
//         if(i==0 || i==1) return cost[i];
//         if(dp[i]!=-1) return dp[i];
//         return dp[i] = cost[i] + min(helper(cost , i-1 ,dp ) , helper(cost , i-2 ,dp  ));
 
//     }
//     int minCostClimbingStairs(vector<int>& cost) {
//         int n = cost.size();
//         vector<int> dp(n , -1);
//         return min(helper(cost , n-1 , dp) , helper(cost , n-2  ,dp ));
//     }
// };


// class Solution {
// public:
//     int minCostClimbingStairs(vector<int>& cost) {
//         int n = cost.size();
//         int i = 2;
        
//         if(n<=2) return min(cost[0] , cost[1]); 
//         while(i<n){
//             cost[i] += min(cost[i-1] , cost[i-2]);
//             i++;

//         }
//         return min(cost[n-1] , cost[n-2]);
        
//     }
// };