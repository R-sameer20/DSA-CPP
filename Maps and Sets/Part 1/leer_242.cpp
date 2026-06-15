class Solution {
public:
    // bool isAnagram(string s, string t) {
        
    //     int n = s.size();
    //     int m = t.size();
    //     if (n!=m) return false;

    //     // hashMap as frequency array

    //     unordered_map<char,int>map1; //s
    //     unordered_map<char,int>map2; //t
        

    //     for(int i = 0 ; i<n; i++){
    //         map1[s[i]]++;

    //     }
    //     for(int i = 0 ; i<n; i++){
    //         map2[t[i]]++;

    //     }

    //     for(auto ele : map1){
    //         char ch1 = ele.first;
    //         int frequency1 = ele.second;

    //         if(map2.find(ch1) != map2.end()){
    //             int frequency2 = map2[ch1];
    //             if(frequency1 != frequency2) return false;
    //         }
    //         else return false;
    //     }
    //     return true;
    // }

//     bool isAnagram(string s, string t) {
        
//         int n = s.size();
//         int m = t.size();
//         if (n!=m) return false;

//         // hashMap as frequency array

//         unordered_map<char,int>map; //s
//         for(int i = 0 ; i<n; i++){
//             map[s[i]]++;

//         }

//         for(int i = 0 ; i<m; i++){
//             char ch = t[i];
//             if(map.find(ch) != map.end()){
//                 map[ch]--;
//                 if(map[ch] == 0) map.erase(ch);
//             }
//             else return false;

//         }
//         if(map.size()>0) return false;
        
//         return true;
//     }
// };