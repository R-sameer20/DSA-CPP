// class Solution {
// public:
//     bool closeStrings(string arr, string brr) {
//         int n = arr.size();
//         int m = brr.size();

//         if(n != m) return false;

//         unordered_map<char , int> a;
//         unordered_map<char , int> b;

//         for(int i = 0 ; i<n ; i++){
//             a[arr[i]]++;
//             b[brr]++;
//         }
//         unordered_map<int , int> aFreq;
//         unordered_map<int , int> bFreq;
//         for(int i = 0 ; i<a.size() ; i++){
//             int A = a.second;
//             int B = b.second;
//             aFreq[A]++;
//             bFreq[B]++;
//         } 
//         for(auto ele : aFreq){
//             if(bFreq.find(ele) == bFreq.end()) return false;
//             else if( bFreq.find(ele) != bFreq.end() ){
//                 if(ele.second != bFreq(ele) ) return false;
//             }
//             else continue;
//         }


//         return true;

         
//     }
// };

// class Solution {
// public:
//     bool closeStrings(string str1, string str2) {
//         if(str1.length() != str2.length()) return false; 
//         unordered_map<char , int> mp1 , mp2 ;
        
//         for(int i = 0 ; i<str1.length() ; i++){
//             mp1[str1[i]]++;
//             mp2[str2[i]]++;

//         }
//         for(auto ele : mp1){
//             char ch =  ele.first;
//             if(mp2.find(ch) == mp2.end()) return false;
//         }

//         unordered_map<int , int> h1 , h2 ;
//         for(auto x : mp1){
//             int freq = x.second;
//             h1[freq]++;
//         }
//         for(auto x : mp2){
//             int freq = x.second;
//             h2[freq]++;
//         }

//         for(auto ele : h1){
//             int key =  ele.first;
//             if(h2.find(key) == h2.end()) return false;
//             if(h2[key] !=h1[key] ) return false;
//         }
//         return true;

        
        

        
         
//     }
// };