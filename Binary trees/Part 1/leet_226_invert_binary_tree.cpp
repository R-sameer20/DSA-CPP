// // my solution
// class Solution {
// public:
//     void invert(TreeNode* root){
//         if(root==NULL) return ;
//         TreeNode* temp = root->left;
//         root->left = root->right;
//         // root->right = NULL;
//         root->right = temp;
//         temp = NULL;
//         invert(root->left);
//         invert(root->right);
//     }

//     TreeNode* invertTree(TreeNode* root) {
//        invert(root);
//        return root;
//     }
// };


// class Solution {
// public:
//     void invert(TreeNode* root){
//         if(root==NULL) return ;
//         invert(root->left);
//         invert(root->right);
//         TreeNode* temp = root->left;
//         root->left = root->right;
//         root->right = temp;
//         temp = NULL;
  
//     }
//     TreeNode* invertTree(TreeNode* root) {
//        invert(root);
//        return root;
//     }
// };
