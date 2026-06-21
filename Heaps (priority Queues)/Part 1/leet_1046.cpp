
// my solution 
// class Solution {
// public:
//     int lastStoneWeight(vector<int>& arr) {
//         priority_queue<int> pq;
//         for(int x : arr ){
//             pq.push(x);
//         }
//         while(pq.size()!=1){
//             int y = pq.top();
//             pq.pop();
//             int x = pq.top();
//             pq.pop();

//             if(x==y){
//                 if(pq.size() == 0) return 0;
//                 else  continue;
//             }
//             else if(x!=y){
//                 y = (y-x);
//                 pq.push(y);
//             }

//         }
//         return pq.top();
        
//     }
// };


// raghav solution 