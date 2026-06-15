// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& arr) {
//         int n = arr.size();
//         unordered_map<string , vector<string>> ana;
//         for(string str : arr){
//             string lexo = str;
//             sort(lexo.begin() , lexo.end());
//             if(ana.find(lexo) == ana.end()){
//                 vector<string> v;
//                 v.push_back(str);
//                 ana[lexo] = v;
//             }
//             else{
//                 ana[lexo].push_back(str);
//             }

//         }
//         vector<vector<string>> ans;
//         for(auto ele : ana){
//             vector<string> v = ele.second;
//             ans.push_back(v);
//         }
//         return ans;

//     }
// };