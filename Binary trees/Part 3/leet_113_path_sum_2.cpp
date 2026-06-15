
// class Solution {
// public:
    
//     void helper(TreeNode* root ,  vector<vector<int>>& ans ,vector<int> v , int sum){
//         if(root==NULL) return;

//         if(root->left==NULL && root->right == NULL){
//             if(root->val == sum){
//                 v.push_back(root->val);
//                 ans.push_back(v);
//             }
        
//             return;
//         }
        
//         v.push_back(root->val);
//         helper(root->left , ans ,v , sum-(root->val));
//         helper(root->right , ans ,v , sum-(root->val));
//     }
//     vector<vector<int>> pathSum(TreeNode* root, int target) {
//         vector<vector<int>> ans;
//         vector<int> v;
//         helper(root , ans , v , target );
//         return ans;
        
//     }
// };