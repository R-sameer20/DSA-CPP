
// debugging needed
 
// class Solution {
// public:

//     double getMedian ( priority_queue<int>& left , priority_queue<int , vector<int> , greater<int> >&right , int x , int y){
//         int totalSize = x+y;
//         if(totalSize % 2!= 0) return right.top();
//         else return (left.top() + right.top())/2.0;
        
//     }

//     bool isBalanced( int x , int y){
//         return (x == y) || (x + 1 == y);

//     }
//     vector<double> medianSlidingWindow(vector<int>& arr, int k) {
//         int n = arr.size();
//         priority_queue<int> left;
//         priority_queue<int , vector<int> , greater<int> >right;
//         int x = 0 , y = 0;
//         right.push(arr[0]);
//         y++;
//         vector<double> ans;
//         for(int i = 1 ; i<k ; i++){
//             int curr = arr[i];
//             double median = getMedian(left , right ,x,y );
//             if(curr < median ){
//                 // go left 
//                 left.push(curr);
//                 x++;
//                 if(!isBalanced(x,y)){
//                     int toBeRemoved = left.top();
//                     left.pop();
//                     right.push(toBeRemoved);
//                     x--;
//                     y++;
//                 }
//             }
//             else{
//                 // go right
//                 right.push(curr);
//                 y++;
//                 if(!isBalanced(x,y)){
//                     int toBeRemoved = right.top();
//                     right.pop();
//                     left.push(toBeRemoved);
//                     x++;
//                     y--;
                    
//                 }
//             }
//         }

//         double m = getMedian(left , right , x , y ) ;
//         vector<double> result;
//         result.push_back(m);
//         unordered_map<int , int> mp;

//         for(int i = 0 ; i<n ; i++){
//             int newElementIndex = i;
//             int oldElementToBeDeleted = i + k;
//             double med = getMedian(left , right , x , y ) ;
//             if(arr[newElementIndex] > med){
//                 // go right
//                 right.push(arr[newElementIndex]);
//                 y++;
//                 if(!isBalanced(x,y)){
//                     int toBeRemoved = right.top();
//                     right.pop();
//                     left.push(toBeRemoved);
//                     x++;
//                     y--;
                    
//                 }
//             }
//             else{
//                 // gp left
//                 left.push(arr[newElementIndex]);
//                 x++;
//                 if(!isBalanced(x,y)){
//                     int toBeRemoved = left.top();
//                     left.pop();
//                     right.push(toBeRemoved);
//                     x--;
//                     y++;
                    
//                 }
//             }
//             mp[arr[oldElementToBeDeleted]] = oldElementToBeDeleted;
//             while(!left.empty() && mp.count(left.top()) ){
//                 mp.erase(left.top());
//                 left.pop();
//                 x--;
//                 if(!isBalanced(x,y)){
//                     int toBeRemoved = right.top();
//                     right.pop();
//                     left.push(toBeRemoved);
//                     x++;
//                     y--;
                    
//                 }
//             }
//             while(!right.empty() &&  mp.count(right.top()) ){
//                 mp.erase(right.top());
//                 right.pop();
//                 y--;
//                 if(!isBalanced(x,y)){
//                     int toBeRemoved = left.top();
//                     left.pop();
//                     right.push(toBeRemoved);
//                     x--;
//                     y++;
//                 }

//             }
//             result.push_back(getMedian(left , right , x , y ));

            
//         }
//         return result;



        
//     }
// };

















// #include <iostream>
// #include <vector>
// #include <queue>
// #include <unordered_map>
// #include <algorithm>

// using namespace std;

// class Solution {
// public:
//     double getMedian(priority_queue<int>& left, priority_queue<int, vector<int>, greater<int>>& right, int x, int y) {
//         if ((x + y) % 2 != 0) {
//             return (x > y) ? left.top() : right.top();
//         } else {
//             return ((double)left.top() + right.top()) / 2.0;
//         }
//     }

//     vector<double> medianSlidingWindow(vector<int>& arr, int k) {
//         int n = arr.size();
//         vector<double> result;
//         if (n == 0 || k == 0) return result;

//         priority_queue<int> left;
//         priority_queue<int, vector<int>, greater<int>> right;
//         unordered_map<int, int> mp;

//         int x = 0, y = 0;

//         auto balance = [&]() {
//             if (x > y + 1) {
//                 right.push(left.top());
//                 left.pop();
//                 x--;
//                 y++;
//             } else if (y > x + 1) {
//                 left.push(right.top());
//                 right.pop();
//                 y--;
//                 x++;
//             }
//         };

//         for (int i = 0; i < k; i++) {
//             if (left.empty() || arr[i] <= left.top()) {
//                 left.push(arr[i]);
//                 x++;
//             } else {
//                 right.push(arr[i]);
//                 y++;
//             }
//             balance();
//         }

//         result.push_back(getMedian(left, right, x, y));

//         for (int i = k; i < n; i++) {
//             int outNum = arr[i - k];
//             int inNum = arr[i];

//             mp[outNum]++;

//             if (outNum <= left.top()) {
//                 x--;
//             } else {
//                 y--;
//             }

//             if (left.empty() || inNum <= left.top()) {
//                 left.push(inNum);
//                 x++;
//             } else {
//                 right.push(inNum);
//                 y++;
//             }

//             balance();

//             while (!left.empty() && mp[left.top()] > 0) {
//                 mp[left.top()]--;
//                 left.pop();
//             }
//             while (!right.empty() && mp[right.top()] > 0) {
//                 mp[right.top()]--;
//                 right.pop();
//             }

//             result.push_back(getMedian(left, right, x, y));
//         }

//         return result;
//     }
// };

// void printVector(const vector<double>& vec) {
//     cout << "[";
//     for (size_t i = 0; i < vec.size(); i++) {
//         cout << vec[i];
//         if (i < vec.size() - 1) cout << ", ";
//     }
//     cout << "]\n";
// }

// int main() {
//     Solution solver;

//     vector<int> arr1 = {1, 3, -1, -3, 5, 3, 6, 7};
//     cout << "Test Case 1: ";
//     printVector(solver.medianSlidingWindow(arr1, 3));

//     vector<int> arr2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     cout << "Test Case 2: ";
//     printVector(solver.medianSlidingWindow(arr2, 4));

//     vector<int> arr3 = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
//     cout << "Test Case 3: ";
//     printVector(solver.medianSlidingWindow(arr3, 3));

//     vector<int> arr4 = {5, 5, 5, 5, 5};
//     cout << "Test Case 4: ";
//     printVector(solver.medianSlidingWindow(arr4, 2));

//     vector<int> arr5 = {2147483647, 2147483647, -2147483648};
//     cout << "Test Case 5: ";
//     printVector(solver.medianSlidingWindow(arr5, 2));

//     vector<int> arr6 = {7, 8, 2, 1, 4};
//     cout << "Test Case 6: ";
//     printVector(solver.medianSlidingWindow(arr6, 5));

//     vector<int> arr7 = {1, 4, 2, 3};
//     cout << "Test Case 7: ";
//     printVector(solver.medianSlidingWindow(arr7, 1));

//     vector<int> arr8 = {-1, -2, -3, -4, -5};
//     cout << "Test Case 8: ";
//     printVector(solver.medianSlidingWindow(arr8, 3));

//     vector<int> arr9 = {10, 20, 30, 40, 50, 60};
//     cout << "Test Case 9: ";
//     printVector(solver.medianSlidingWindow(arr9, 3));

//     vector<int> arr10 = {1, 3, 1, 3, 1, 3};
//     cout << "Test Case 10: ";
//     printVector(solver.medianSlidingWindow(arr10, 4));

//     return 0;
// }




