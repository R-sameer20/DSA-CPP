
// class Solution {
// public:
//     void helper(TreeNode* root , int &maxDia){
//         if(root == 0) return ;
//         int dia =  levels(root->left) + levels(root->right) ;
//         maxDia = max(maxDia , dia);
//         helper(root->left , maxDia);
//         helper(root->right , maxDia);
//     }
//     int levels(TreeNode* root){
//     if(root == 0) return 0;
//     return 1 + max(levels(root->left) , levels(root->right));
// } 
//     int diameterOfBinaryTree(TreeNode* root) {
//        int maxDia = 0;
//        helper(root , maxDia);
//        return maxDia;
//     }
// };