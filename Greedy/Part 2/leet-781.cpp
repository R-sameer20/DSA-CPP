// class Solution {
// public:
//     int numRabbits(vector<int>& ans) {
//        unordered_map<int , int >mp;
//        for(int x : ans ){
//         mp[x]++;
//        }
//        int result = 0;
//        for(auto ele : mp){
//             int type = ele.first;
//             int count = ele.second ;
//             if(type == 0 ){
//                 result+=count;
//             }
//             else if((type + 1) >= count){
//                 result+=(type+1);
//             }
//             else{
//                 if((count)%(type+1)==0){
//                     result+=count;
//                 }
//                 else{
//                     int group =( (count)/(type+1) );
//                     result+=(group*(type+1));
//                     result+=(type+1);
//                 }
//             }
//         }
//         return result;
        
//     }
// };

// class Solution {
// public:
//     int numRabbits(vector<int>& ans) {
//        unordered_map<int , int >mp;
//        int result = 0;
//        for(int i = 0 ; i<ans.size() ; i++ ){
//         if(!( mp[ans[i] + 1 ] )){
//             result+=(ans[i]+1);
//             if(ans[i] == 0) continue;
//             mp[ans[i]+1]=1;
//         }
//         else{
//             mp[ans[i]+1]++;
//             int key = ans[i]+1;
//             int val = mp[key];
//             if(key == val ){
//                 mp.erase(key);
//             }
//         }
        
//        }
       
       
//         return result;
        
//     }
// };