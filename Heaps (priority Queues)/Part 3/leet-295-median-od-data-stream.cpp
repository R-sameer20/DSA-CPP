
// solution one TLE
// class MedianFinder {
// public:
// vector<int> v;
//     MedianFinder() {
        
//     }
    
//     void addNum(int num) {
//         v.push_back(num);
//         sort(v.begin() , v.end());
//     }
    
//     double findMedian() {
//         int n = v.size();
//         if(n%2 !=0){
//             return v[n/2];
//         }
//         else return  (v[n/2] + v[(n/2)-1])/2.0;
            
            
        
        
//     }
// };

// class MedianFinder {
// public:
//     priority_queue<int> left;
//     priority_queue<int , vector<int> , greater<int>> right;

//     MedianFinder() {
        
//     }
    
//     void addNum(int num) {
//         if(left.size() == 0 || num < left.top() ) left.push(num);
//         else right.push(num);

        
//         if(left.size() > right.size() + 1){
//             right.push(left.top());
//             left.pop();   
//         }
        
//         if(left.size() +1 < right.size() ){
//             left.push(right.top());
//             right.pop();   
//         }
//     }
    
//     double findMedian() {
//         if(left.size() == right.size() ){
//             return (left.top() + right.top() )/2.0;  
//         }
//         else{
//             if(left.size() > right.size() ) return left.top();
//             else return right.top();
//         }
//     }
// };


