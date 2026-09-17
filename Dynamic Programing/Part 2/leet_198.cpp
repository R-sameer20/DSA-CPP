
// my solution 

// class Solution {
// public:
//     int rob(vector<int>& arr ) {
//         if(arr.size() == 0) return 0;
//         else if(arr.size() == 1) return arr[0];
//         else if(arr.size() ==2) return max(arr[0] , arr[1]);
//         else {
//             int n = arr.size();
//             vector<int> mxArr(n,0);
//             mxArr[0] = arr[0] ;
//             mxArr[1] = arr[1];
//             int mx = arr[0];
//             int i = 2 ;
//             int j = 0 ;
//             while(i<n){
//                 mx = max(mxArr[j] , mx);
//                 mxArr[i] = mx + arr[i];
//                 i++;
//                 j++;
                
//             }
//             while(j<n){
//                 mx = max(mxArr[j] , mx);
//                 j++;
//             }
//             return mx;
//         }
//     }
// };



// reduce space complexity
// class Solution {
// public:
//     int rob(vector<int>& arr) {
//         if (arr.empty()) return 0;
//         int prev2 = 0; 
//         int prev1 = 0; 
//         for (int i = 0; i < arr.size(); i++) {
//             int current = max(prev1, prev2 + arr[i]);
//             prev2 = prev1;
//             prev1 = current;
//         }
        
//         return prev1;
//     }
// };



// class Solution {
// public:
// // global dp array
//     vector<int> dp;

//     // give tle and mle 
//     // int f(vector<int> arr , int i  ){
//     //     if(i == arr.size() - 1) return arr[i];
//     //     if(i == arr.size() - 2) return max(arr[i] , arr[i+1]);
//     //     return max(arr[i] + f(arr, i+2) , f(arr , i+1) );
        
//     // }

//     // to down 
//     // int ftd(vector<int> arr , int i  ){
//     //     if(i == arr.size() - 1) return arr[i];
//     //     if(i == arr.size() - 2) return max(arr[i] , arr[i+1]);

//     //     if(dp[i]!=-1) return dp[i];


//     //     return dp[i]= max(arr[i] + ftd(arr, i+2) , ftd(arr , i+1) );
        
//     // }

//     // bottom up 
//     int fbu(vector<int>& arr){
//         int n = arr.size();
//         if(n == 1) return arr[0];
//         if(n == 2) return max(arr[0] , arr[1]);
//         dp.clear();
//         dp.resize(n);
//         dp[n-1] = arr[n-1];
//         dp[n-2] = max(arr[n-1] , arr[n-2]);
//         for(int i = n-3 ; i>=0 ; i--){
//             dp[i] = max(arr[i]+dp[i+2] , dp[i+1] );
//         }
//         return dp[0];

//     }


//     int rob(vector<int>& arr) {
//         dp.clear();
//         // given possible size se jyada ki arrY BANA LO 
//         // dp.resize(arr.size() , -1);
//         // dp.resize(105 , -1);
//         // return ftd(arr , 0 );
//         return fbu(arr);
//     }
// };