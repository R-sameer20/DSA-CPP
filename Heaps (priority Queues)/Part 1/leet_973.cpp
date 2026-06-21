// class Solution {
// public:

    

//     typedef pair<int , vector<int> > piv; 
//     vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
//         priority_queue<piv> pq;
        
//         for( auto v : arr){
//             int x = v[0];
//             int y = v[1] ;

//             int dist = (x*x) + (y*y) ;
//             pq.push({dist , v}) ;
//             if(pq.size() > k) pq.pop();
//         }
        
//         vector<vector<int>> ans;
//         while(pq.size() > 0){
//             ans.push_back(pq.top().second);
//             pq.pop();
//         }

//         return ans;
        
//     }
};