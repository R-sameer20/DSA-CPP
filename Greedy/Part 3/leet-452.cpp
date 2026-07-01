// bool cmp (vector<int> &a , vector<int> &b){
//     return a[1] < b[1];
// }

// class Solution {
// public:
//     int findMinArrowShots(vector<vector<int>>& arr) {
//         int ans = 0;
//         sort(arr.begin() , arr.end() , cmp);
//         int lastEndTime = arr[0][1];
//         for(int i = 1 ; i<arr.size() ; i++){
//             if(arr[i][0] <= lastEndTime){
//                 ans++;
//             }
//             else{
            
//                 lastEndTime = arr[i][1];
//             }
//         }
//         return arr.size() - ans;
//     }
// };