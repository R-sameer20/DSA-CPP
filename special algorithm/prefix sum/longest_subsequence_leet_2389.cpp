#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   int arr[]={4,5,2,1};
   int queries[]={3,10,21};

   int n = sizeof(arr)/sizeof(arr[0]);
   int m = sizeof(queries)/sizeof(queries[0]);

   vector<int> v(arr,arr+n);
   vector<int> ans(m,0);
   sort(v.begin(),v.end());
   for(int i = 1 ; i<n ; i++){
        v[i]+=v[i-1];
   }

//    for(int i = 0 ; i<m  ; i++){
//         int len = 0;
//         for(int j = 0 ; j<n ; j++){
//             if(v[j]>queries[i]) break;
//              len++;      
//         }
//         ans[i]=len;
//    }
  for(int i = 0 ; i<m  ; i++){
        int max_len = 0;
        int lo = 0; 
        int hi = n-1;
        while(lo<=hi){
           int mid = lo + ((hi-lo)/2);
           if(v[mid]>queries[i]) hi=mid-1;
           else{
            max_len = mid + 1;
            lo = mid + 1;
           }
        }
       
        ans[i]=max_len;
   }
   for(int i = 0 ; i<m ; i++){
    cout<<ans[i]<<" ";
   }
  
}
 
// /TIME LIMIT EXCEDDED

// class Solution {
// public:
//     vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
//       int n = nums.size();
//       int m = queries.size();
//        sort(nums.begin(),nums.end());
//       for(int i = 1; i<n ; i++){
//         nums[i]+=nums[i-1];
//       }
//       vector<int> ans(m,0);
//       for(int i = 0 ; i<m ; i++){
//         int x = 1;
//         while(queries[i]>=nums[i]){
//             x++;
//         }
//         ans[i]=x;
//       }
//       return ans;

//     }
// };
