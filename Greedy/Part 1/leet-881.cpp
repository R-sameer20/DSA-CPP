// class Solution {
// public:
//     int numRescueBoats(vector<int>& arr, int limit) {
//         sort(arr.begin() , arr.end());
//         int i = 0;
//         int j = arr.size()-1;
//         int bot = 0;
//         while(i<=j){
//             if(arr[i]+arr[j] <= limit){
//                 bot++;
//                 i++;
//                 j--;
//             }
//             else{
//                 bot++;
//                 j--;    
//             }
//         }
//         return bot;
        
//     }
// };


// if only 2 people costraint is not given 
// class Solution {
// public:
//     int numRescueBoats(vector<int>& arr, int limit) {
//         map<int, int, greater<int>> m;
//         for (int weight : arr) {
//             m[weight]++;
//         }

//         int noOfBoat = 0;

//         while (!m.empty()) {
//             noOfBoat++; 
//             int currentRemainingCapacity = limit;

//             auto it = m.begin();
//             while (it != m.end()) {
//                 int personWeight = it->first;

//                 if (personWeight <= currentRemainingCapacity) {
//                     currentRemainingCapacity -= personWeight; 
//                     it->second--; 

//                     if (it->second == 0) {
//                         it = m.erase(it); 
//                     }
//                     else {
//                         continue; 
//                     }
//                 } 
//                 else {
//                     it++;
//                 }
//             }
//         }

//         return noOfBoat;
//     }
// };