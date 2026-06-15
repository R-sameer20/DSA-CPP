// class Solution {
// public:
//     vector<int> canSeePersonsCount(vector<int>& arr) {
//         int n = arr.size();
//         int Ngi[n] ;
//         Ngi[n-1] = 0;
//         stack<int> st;
//         st.push(arr[n-1]);
//         int count;
//         vector<int> ans(n,0);
//         for(int i = n-2 ; i>=0 ; i--){
//             count = 0;
//             while(st.size()>0 && st.top() < arr[i] ){
//                 count++;
//                 st.pop();
//             }
//             if(st.size()!=0) count++;
//             ans[i] = count;
//             st.push(arr[i]);
//         }
        
//         return ans;

        
//     }
// };


// My logic
// class Solution {
// public:
//     vector<int> canSeePersonsCount(vector<int>& arr) {
//         int n = arr.size();
//         int Ngi[n] ;
//         Ngi[n-1] = n;
//         stack<int> st;
//         st.push(n-1);
//         for(int i = n-2 ; i>=0 ; i--){
//             while(st.size()>0 && arr[st.top()] < arr[i] ){
//                 st.pop();
//             }
//             if(st.size()==0) Ngi[i] = n;
//             else Ngi[i] = st.top();
//             st.push(i);
//         }
//         vector<int> ans(n,0);
//         for(int i = 0 ; i<n ; i++){
//             ans[i] = Ngi[i] - i ;
//         }
//         return ans;

        
//     }
// };