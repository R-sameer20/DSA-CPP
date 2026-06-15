// My logic
// class Solution {
// public:
//     TreeNode* helper(int lo , int hi , vector<int>& arr) {
//         if(lo > hi ) return NULL;
//         TreeNode* root = new TreeNode(arr[lo]);
//         int n = arr.size();
//         int newMid = (n - lo ) / 2;
//         root->left = helper(lo+1 , newMid , arr );
//         root->right = helper(newMid + 1 , hi , arr);
//         return root;
        
//     }
//     TreeNode* bstFromPreorder(vector<int>& arr) {
//         return helper (0 , arr.size() , arr );
//     }
// };