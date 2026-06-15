// class Solution {
// public:
//     int maximumNumberOfStringPairs(vector<string>& words) {
//         unordered_set<string> s;
//         int count = 0;
//         int n = words.size();
//         for(int i = 0 ; i<n ; i++){
//             string temp = words[i];
            
//             reverse(temp.begin() , temp.end());
//             if(temp == words[i]) continue;
//             else s.insert(temp);
//         }

//         for(int i = 0 ; i<n ; i ++){
//             if(s.find(words[i]) != s.end()){
//                 count ++;
//             }
//         }
//     return count/2;
        
//     }
// };