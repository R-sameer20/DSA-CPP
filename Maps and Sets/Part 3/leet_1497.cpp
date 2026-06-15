// class Solution {
// public:
//     bool canArrange(vector<int>& arr, int k) {
//         unordered_map<int , int > m;
//         for(auto ele : arr){
//             ele =( (ele%k) + k )% k;
            
//             m[ele]++;
//         }
//         if(m.find(0) != m.end()){
//             if(m[0]%2!=0) return false;
//             m.erase(0);

//         }
        
       
//         for(auto x : m){
//             int ele = x.first;
//             int diff = k - ele;
//             if(m.find(diff) == m.end()) return false;
//             if(m[ele] != m[diff]) return false;
//         }
//         return true;
        
//     }
// };