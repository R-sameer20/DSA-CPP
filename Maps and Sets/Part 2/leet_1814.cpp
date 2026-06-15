
// // Not all test case run
// class Solution {
// public:
//     int reverse(int n){
//         int r = 0;
//         while(n>0){
//             r*=10;
//             r+=(n%10);
//             n/=10;
//         }
//         return r;
//     }
//     int countNicePairs(vector<int>& arr) {
//         unordered_map<int , int > m;

//         for(int ele : arr){
//             int rev = abs(ele - reverse(ele));
//             m[rev]++;
//         }
//         int count = 0 ;
//         for(auto ele : m){
//             int freq =  ele.second;
//             if(freq >= 2) count += ((freq * (freq-1))/2);
//             else continue;
            
//         }
//         return count;
        
//     }
// };


// class Solution {
// public:
//     int reverse(int n){
//         int r = 0;
//         while(n>0){
//             r*=10;
//             r+=(n%10);
//             n/=10;
//         }
//         return r;
//     }
//     int fact(int n){
//         int f = 1;
//         for(int i = 2 ; i<=n ; i++) f*=i;
//         return f;
//     }
//     int combi(int n , int r){
//         return fact(n)/(fact(r) * fact(n-r));

//     }
//     int countNicePairs(vector<int>& arr) {
//         unordered_map<int , int > m;
//         int n = arr.size();

//         for(int i = 0 ; i<n ; i++){
//             arr[i]-=reverse(arr[i]);
//         }
//         for(int ele : arr){
//             m[ele]++;   
//         }
        
//         int count = 0 ;
//         for(auto ele : m){
//             int freq =  ele.second;
//             count += combi(freq , 2);
            
//         }
//         return count;
        
//     }
// };

// class Solution {
// public:
//     int reverse(int n){
//         int r = 0;
//         while(n>0){
//             r*=10;
//             r+=(n%10);
//             n/=10;
//         }
//         return r;
//     }
    
//     int countNicePairs(vector<int>& arr) {
//         unordered_map<int , int > m;
//         int n = arr.size();
//         int count  = 0;
//         for(int i = 0 ; i<n ; i++){
//             arr[i]-=reverse(arr[i]);
//         }
//         for(int i = 0 ; i<n ; i++){
//             if(m.find(arr[i]) != m.end()){
//                 count = count%1000000007;
//                 count += m[arr[i]];
//                 m[arr[i]]++;
//             }
//             else m[arr[i]]++;
//         }
//         return count%1000000007;
        
//     }
// };