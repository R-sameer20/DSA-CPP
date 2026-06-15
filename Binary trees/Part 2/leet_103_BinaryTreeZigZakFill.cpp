
// class Solution {
// public:
// int levels(TreeNode* root){
//         if(root == 0) return 0;
//         return 1 + max(levels(root->left) , levels(root->right));
//     }
//     void NthLevelLeftToRight(int currentLevel  , TreeNode* root , int level , vector<int> &v  ){
//         if(root == NULL) return;
//         if(currentLevel == level ){
//             v.push_back(root->val);
//             return;
//         }
//         currentLevel++;
//         NthLevelLeftToRight( currentLevel , root->left , level , v );
//         NthLevelLeftToRight( currentLevel , root->right , level , v);   
//     }
//     void NthLevelRigntToLeft(int currentLevel  , TreeNode* root , int level , vector<int> &v ){
//         if(root == NULL) return;
//         if(currentLevel == level ){
//             v.push_back(root->val);
//             return;
//         }
//         currentLevel++;
//         NthLevelRigntToLeft( currentLevel , root->right , level , v); 
//         NthLevelRigntToLeft( currentLevel , root->left , level , v ); 
//     }

//     void lOrder(TreeNode* root , vector<vector<int>> &ans ){
//         int n = levels(root);
//         for(int i = 1 ; i<=n ; i++){
//             vector<int> v;
//             if(i%2!=0) NthLevelLeftToRight(1 , root, i , v);
//             else NthLevelRigntToLeft(1 , root, i , v);
//             ans.push_back(v);
//         }
//     }
//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         vector<vector<int>> ans;
//         lOrder(root,ans);
//         return ans;
//     }
// };