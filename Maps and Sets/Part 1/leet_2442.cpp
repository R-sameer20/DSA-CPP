// class Solution {
// public:
//     int countDistinctIntegers(vector<int>& nums) {
        
//         int n = nums.size();
//         if(n == 0) return 0;
//         unordered_set<int> s;
//         int i = 0;
//         for( i = 0 ; i<n  ; i++){
//             string temp = to_string(nums[i]);
//             reverse(temp.begin() , temp.end());
//             nums.push_back(stoi(temp));
//             s.insert(nums[i]);
//             s.insert(stoi(temp));
//         }

//         for(int j = i ; j<nums.size() ; j++){
//             s.insert(nums[j]);
//         }

//         return s.size();
        
//     }
// };


// int reverse(int n){
//         int r = 0;
//         while(n>0){
//             r*=10;
//             r += (n%10);
//             n /=10;
//         }
//         return r;
//     }
//     int countDistinctIntegers(vector<int>& nums) {
        
//         int n = nums.size();
//         if(n == 0) return 0;
//         unordered_set<int> s;
        
//         for( int i = 0 ; i<n  ; i++){
//             int rev = reverse(nums[i]);
//             nums.push_back(rev);
            
//         }

//         for(int j = 0; j<nums.size() ; j++){
//             s.insert(nums[j]);
//         }

//         return s.size();
        
//     }









    // int reverse(int n){
    //     int r = 0;
    //     while(n>0){
    //         r*=10;
    //         r += (n%10);
    //         n /=10;
    //     }
    //     return r;
    // }
    // int countDistinctIntegers(vector<int>& nums) {
    //     int n = nums.size();
    //     if(n == 0) return 0;
    //     unordered_set<int> s;
    //     for( int i = 0 ; i<n  ; i++){
    //         int rev = reverse(nums[i]);
    //         s.insert(rev);
    //         s.insert(nums[i]);
            
    //     }
    //     return s.size();
        
    // }
