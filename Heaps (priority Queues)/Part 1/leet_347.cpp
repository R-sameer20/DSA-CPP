// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& arr, int k) {
//         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//         unordered_map<int , int > m;
//         int n = arr.size();
//         for(int i = 0 ; i<n ; i++){
//             m[arr[i]]++;
//         }

//         for(auto ele : m){
//             int num = ele.first;
//             int freq = ele.second;
//             pq.push({freq , num});
//             if(pq.size() > k){
//                 pq.pop();
//             }
//         }

//         vector<int> ans;

//         while(pq.size() > 0){
//             pair<int, int> p = pq.top();
            
//             ans.push_back(p.second);
//             pq.pop();
//         }
//         return ans;
        
//     }
// };