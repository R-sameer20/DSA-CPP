// class Solution {
// public:
    
//     int level(TreeNode* root){
//         if(root == NULL) return 0;
//         return 1 + max(level(root->left),level(root->right));
//     }
//     void NthLevelLeftToRight(int currentLevel  , TreeNode* root , int level , vector<int>& ans){
//         if(root == NULL) return;
//         if(currentLevel == level ){
//             ans[currentLevel] = root->val;
//             return;
//         }
        
//         NthLevelLeftToRight( currentLevel+1 , root->left , level ,ans );
//         NthLevelLeftToRight( currentLevel+1 , root->right , level ,ans);   
// }

//     void levelOrder(TreeNode* root , vector<int>& ans){
//         int n = ans.size();
//         for(int i = 0 ; i<n ; i++){
//             NthLevelLeftToRight(0 , root, i , ans);
            
//         }
//     }

//     vector<int> rightSideView(TreeNode* root) {
//         vector<int> ans(level(root) , 0 );
//         levelOrder(root , ans);
//         return ans;
//     }
// };