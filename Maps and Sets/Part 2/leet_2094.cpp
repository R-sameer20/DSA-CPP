// class Solution {
// public:
//     vector<int> findEvenNumbers(vector<int>& arr) {
//         int n = arr.size();
//         unordered_map<int , int >m;

//         for(int ele : arr) m[ele]++;

//         vector<int> ans;

//         for(int i = 100 ; i<=998 ; i+=2){
//             int x = i;
//             int a, b , c;
//             a = x%10;
//             x = x/10;
//             b = x%10;
//             x = x/10;
//             c = x;
            
//             if(m.find(a) != m.end()){
//                 m[a]--;
//                 if(m[a] == 0) m.erase(a);
//                 if(m.find(b) != m.end()){
//                     m[b]--;
//                     if(m[b] == 0) m.erase(b);
//                     if(m.find(c) != m.end()) ans.push_back(i);
//                     m[b]++;
//                 }
//                 m[a]++;

//             }
            
//         }
//         return ans;
        
//     }
// };