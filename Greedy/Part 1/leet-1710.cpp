// class Solution {
// public:
//     static bool cmp(vector<int>& arr, vector<int>& brr) {
//         return arr[1] > brr[1];
//     }
    
//     int maximumUnits(vector<vector<int>>& arr, int truckSize) {
//         sort(arr.begin(), arr.end(), cmp);
//         int i = 0;
//         int totalUnit = 0; 

//         while (truckSize > 0 && i < arr.size() ) {
//             vector<int> temp = arr[i]; 
            
//             if (temp[0] < truckSize) {
//                 totalUnit += (temp[0] * temp[1]);
//                 truckSize -= temp[0]; 
//             } 
//             else {
//                 totalUnit += (truckSize * temp[1]);
//                 truckSize = 0;
//                 break; 
//             }
//             i++;
//         }
//         return totalUnit;
//     }
// };

// class Solution {
// public:
//     static bool cmp(vector<int>& arr, vector<int>& brr) {
//         return arr[1] > brr[1];
//     }
    
//     int maximumUnits(vector<vector<int>>& arr, int truckSize) {
//         sort(arr.begin(), arr.end(), cmp);
        
//         int totalUnit = 0; 

//         for(int i = 0 ; i<arr.size() ; i++){
//             if(arr[i][0] <= truckSize ){
//                 totalUnit += arr[i][0]*arr[i][1];
//                 truckSize-=arr[i][0];
//             }
//             else{
//                 totalUnit += truckSize*arr[i][1];
//                 truckSize = 0;
//             }
//             if(truckSize == 0) break;
//         }
//         return totalUnit;
//     }
// };