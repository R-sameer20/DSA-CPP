// class Solution {
// public:
//     int largestSumAfterKNegations(vector<int>& arr, int k) {
//         int sum =0;
//         priority_queue<int , vector<int> , greater<int> >pq;
//         for(int x : arr){
//             pq.push(x);
//         }
//         while(k>0){
//             if(pq.top() == 0) break; 
//             int x = pq.top();

//             pq.pop();
            
//             x = (x*(-1));
//             pq.push(x);
//             k--;

//         }
        
//         for(int i = 0 ; i<arr.size() ; i++){
//             sum+=pq.top();
//             pq.pop();
//         }
//         return sum;
//     }
// };

// class Solution {
// public:
//     int largestSumAfterKNegations(vector<int>& arr, int k) {
//         int sum = 0;
//         priority_queue<int , vector<int> , greater<int> >pq(arr.begin() , arr.end());
//         for(int i = 0 ; i<arr.size() ; i++) sum+=arr[i];
//         while(k--){
//             if(pq.top() == 0) break; 
//             int x = pq.top();
//             pq.pop();
//             sum-=x;
//             pq.push(-1*x);
//             sum+=(-x);
//         }
//         return sum;
//     }
// };