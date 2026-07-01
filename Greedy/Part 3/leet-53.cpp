// variation 1
//  bool cmp (vector<int>& p , vector<int>& q){
//         return p[1] < q[1];
// }

// class Solution {
// public:

    
//     vector<vector<int>> merge(vector<vector<int>>& arr) {
//         sort(arr.begin() , arr.end() , cmp);
//         vector<vector<int>> result;

//         int n = arr.size() ;
//         result.push_back(arr[n-1]);

//         for(int i = n-2 ; i>=0 ; i--){
//             vector<int>& lastInterval = result[result.size() - 1];
//             vector<int> current = arr[i];
//             if(current[1] >= lastInterval[0]){
//                 lastInterval[0] = min(lastInterval[0] , current[0]);
//                 lastInterval[1] = max(lastInterval[1] , current[1]);
//             }
//             else{
//                 result.push_back(arr[i]);
//             }
//         }
//         return result;
//     }
// };


// variation 2
//  bool cmp (vector<int>& p , vector<int>& q){
//         return p[0] < q[0];
// }

// class Solution {
// public:

    
//     vector<vector<int>> merge(vector<vector<int>>& arr) {
//         sort(arr.begin() , arr.end() , cmp);
//         vector<vector<int>> result;

//         int n = arr.size() ;
//         result.push_back(arr[0]);

//         for(int i = 1 ; i<n; i++){
//             vector<int>& lastInterval = result[result.size() - 1];
//             vector<int> current = arr[i];
//             if(current[0] <= lastInterval[1]){
//                 lastInterval[0] = min(lastInterval[0] , current[0]);
//                 lastInterval[1] = max(lastInterval[1] , current[1]);
//             }
//             else{
//                 result.push_back(arr[i]);
//             }
//         }
//         return result;
//     }
// };