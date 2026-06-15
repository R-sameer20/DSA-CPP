// class Solution {
// public:
//     // vector<int> twoSum(vector<int>& arr, int target) {
//     //     vector<int> ans ;
//     //     int n = arr.size();
//     //     for(int i= 0 ; i<n-1 ; i++ ){
//     //         for(int j = i+1 ; j<n ; j++){
//     //             if(arr[i] + arr[j] ==target ){
//     //                 ans.push_back(i);
//     //                 ans.push_back(j);
//     //                 return ans;
//     //             }
//     //         }
//     //     }
//     //     return ans;
//     // }

// vector<int> twoSum(vector<int>& arr, int target) {
//     vector<int> ans ;
//     int n = arr.size();
//     unordered_map<int,int> map; //array element and its index
//     for(int i= 0 ; i<n ; i++ ){
//         int remaining = target - arr[i];
//         if(map.find(remaining) != map.end()){
//             ans.push_back(map[remaining]);
//             ans.push_back(i);
//         }
//         else map[arr[i]] = i;
//     }
//         return ans;
// }
// };