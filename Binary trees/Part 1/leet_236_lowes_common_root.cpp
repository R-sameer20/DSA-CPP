// class Solution {
// public:
//     bool exisrInTree(TreeNode* root , TreeNode* target){
//         if(root == NULL) return false;
//         if(root == target) return true;
//         return exisrInTree(root->left , target) || exisrInTree(root->right , target);

// }
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(root==p || root==q) return root;
//         else if(exisrInTree(root->left , p) && exisrInTree(root->right , q)) return root;
//         else if(exisrInTree(root->right , p) && exisrInTree(root->left , q)) return root;
//         else if(exisrInTree(root->left , p) && exisrInTree(root->left , q) ) return lowestCommonAncestor(root->left , p , q);
//         return lowestCommonAncestor(root->right , p , q);
//     }
// };


// method 2
// class Solution {
// public:
//     bool exisrInTree(TreeNode* root , TreeNode* target){
//         if(root == NULL) return false;
//         if(root == target) return true;
//         return exisrInTree(root->left , target) || exisrInTree(root->right , target);

// }
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(exisrInTree(root->left , p) && exisrInTree(root->left , q) ) return lowestCommonAncestor(root->left , p , q);
//         else if(exisrInTree(root->right , p) && exisrInTree(root->right , q) ) return lowestCommonAncestor(root->right , p , q);
//         return root;
//     }
// };