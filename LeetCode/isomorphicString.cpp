// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//         if(s.size()!=t.size()) return false;

//         vector<char> sCheck(250 , '\0');
//         vector<bool> tCheck(250 , false);
//         for(int i = 0 ; i<s.size() ; i++){
//             if(tCheck[t[i]] == false ){
//                 if(sCheck[s[i]]!='\0') return false ;
//                 sCheck[s[i]] = t[i];
//                 tCheck[t[i]] = true;
//             }
//             else{
//                 if(sCheck[s[i]] != t[i]) return false;
//             }
//         }
//         return true;
//     }
// };

// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//         int m1[256] = {0};
//         int m2[256] = {0};
        
//         for(int i = 0 ; i < s.size() ; i++){
//             if(m1[s[i]] != m2[t[i]]){
//                 return false;
//             }
//             // Store the next index (i + 1) to avoid 0-index conflicts with the default {0}
//             m1[s[i]] = i + 1;
//             m2[t[i]] = i + 1;
//         }
        
//         return true;
//     }
// };