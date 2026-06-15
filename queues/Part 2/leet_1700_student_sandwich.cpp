
// class Solution {
// public:
//     int countStudents(vector<int>& students, vector<int>& sandwiches) {
//         int stu = students.size();
//         int san = sandwiches.size();
//         queue<int> st;
//         int i = 0;
//         int j = 0;

//         while(i<stu){
//             if(students[i]!=sandwiches[j]){
//                 st.push(students[i]);    
//             }
//             else j++;
//             i++;
//         }
//         int n = st.size();
//         for(int i = 0 ; i<=n ; i++){
//             if(st.front()!=sandwiches[j]){
//                 st.push(st.front());
//                 st.pop();
//             }
//             else{
//                 j++;
//                 st.pop();
//             }
//         }
        
        
//         return st.size();

//     }
// };