// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& arr, int k) {
//         int n = arr.size();
//         int Ngi[n];
//         Ngi[n-1] = n;
//         stack<int> st;
//         st.push(n-1);
//         for(int i = n-2 ; i>=0 ; i--){
//             while(st.size()>0 && arr[st.top()]<=arr[i])  st.pop();
//             if(st.size()==0) Ngi[i]=n;
//             else Ngi[i] = st.top();
//             st.push(i);
//         }
//         vector<int> ans;
//         for(int i = 0 ; i<n - k + 1 ; i++){
//             int mx = arr[i];
//             int j = i;
//             while(j < i+k){
//                 mx = arr[j];
//                 j = Ngi[j];

//             }
//             ans.push_back(mx);

//         }
//         return ans;
        
//     }
// };