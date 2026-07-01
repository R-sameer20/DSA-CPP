// bool cmp (vector<int> &a , vector<int> &b){
//     return a[1] < b[1];
// }             
// class Solution {
// public:
//     int eraseOverlapIntervals(vector<vector<int>>& arr) {
//         int ans = 0;
//         sort(arr.begin() , arr.end() , cmp);
//         int lastEndTime = arr[0][1];
//         for(int i = 1 ; i<arr.size() ; i++){
//             if(arr[i][0] < lastEndTime){
//                 ans++;
//             }
//             else{
            
//                 lastEndTime = arr[i][1];
//             }
//         }
//         return ans;



//     }
// };


// bool cmp (vector<int> &a , vector<int> &b){
//     return a[0] < b[0];
// }
    


// class Solution {
// public:
//     int eraseOverlapIntervals(vector<vector<int>>& arr) {
//         int ans = 0;
//         sort(arr.begin() , arr.end() , cmp);
//         int lastEndTime = arr[0][1];
//         for(int i = 1 ; i<arr.size() ; i++){
//             if(arr[i][0] < lastEndTime){
//                 ans++;
//                 lastEndTime = min(lastEndTime , arr[i][1]);

//             }
//             else{
            
//                 lastEndTime = arr[i][1];
//             }
//         }
//         return ans;



//     }
// };