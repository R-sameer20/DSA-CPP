// my logic

// class Solution {
// public:
//     typedef pair<int, int> pi;
//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//         unordered_map<int , int> m;
//         int n = arr.size();
//         for(int i = 0 ; i< n ; i++){
//             if(x<0 && arr[i]>0)  m[(arr[i]*(-1))] = (arr[i]+abs(x));
//             else if(x>0 && arr[i]<0) m[(arr[i]*(-1))] = (abs(arr[i])+x); 
//             else if(x<0 && arr[i]<0) m[(arr[i]*(-1))] = abs(arr[i]))+abs(x);
//             elsem[(arr[i]*(-1))] = (abs(arr[i]-x));
//         }

//         priority_queue<pi> pq;
//             for(auto ele : m){
//                 pq.push({ele.second , ele.first}); 
//                 if(pq.size() > k) pq.pop();
//             }
//         vector<int> ans;
//         while(pq.size() > 0){
//             ans.push_back(pq.top().second * (-1));
//             pq.pop();
//         }
//         return ans;
        
//     }
// };




// class Solution {
// public:
//     typedef pair<int, int> pi;
//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//         int n = arr.size();
//         priority_queue<pi> pq;
//         for(auto ele : arr){
//             int dist = abs(x-ele);
//             pq.push({dist, ele}); 
//             if(pq.size() > k) pq.pop();   
                
//         }
        
            
//         vector<int> ans;
//         while(pq.size() > 0){
//             ans.push_back(pq.top().second );
//             pq.pop();
//         }
//         sort(ans.begin() , ans.end());
//         return ans;
        
//     }
// };