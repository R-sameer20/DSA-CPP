// class Solution {
// public:

//     vector<int> dp;
//     // int ftd(int  i){
//     //     if(i == 0 || i == 1 ) return 1;
//     //     if(i == 2) return 2 ;
//     //     if(dp[i]!=-1) return dp[i];
//     //     int sum = 0;
//     //     for(int k = 1 ; k<=i ; k++){
//     //         // k = potential root
//     //         sum+=(ftd(k-1)*ftd(i-k));
//     //     }
//     //     return dp[i] =  sum;

 
//     // }
//     int numTrees(int n) {
//         dp.clear();
//         // dp.resize(30 , -1);
//         dp.resize(30 , 0);
//         dp[0] = 1;
//         dp[1] = 1;
//         dp[2] = 2;

//         for(int i=3 ; i<=n ; i++){
//             for(int k = 1 ; k<=i ; k++){
//                 // k = potential root
//                 dp[i] +=(dp[k-1] *dp[i-k]);
//             }
//         }
//         // return ftd(n);
//         return dp[n];
//     }
// };