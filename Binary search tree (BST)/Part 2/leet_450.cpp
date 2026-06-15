
// class Solution {
// public:
//     TreeNode* iop(TreeNode* root){
//         TreeNode* pred = root->left;
//         while(pred->right != NULL){
//             pred = pred->right;
//         }
//         return pred;
//     }
//     TreeNode* ios(TreeNode* root ){
//         TreeNode* suc = root->right;
//         while(suc->left != NULL ){
//             suc = suc->left;
//         }
//         return suc;
//     }
//     TreeNode* deleteNode(TreeNode* root, int key) {
//         if(root == NULL) return NULL;
//         // leaf Node
//         if(root->val == key ){
//             // case 1 if no child 
//             if(root->left == NULL && root->right == NULL) return NULL ;

//             // csae 2 only one child 
//             if(root->left == NULL || root->right == NULL){
//                 if(root->left != NULL ) return root->left;
//                 else return root->right;
//             }


//             // case 3 tow child node presen
//             if(root->left != NULL && root->right != NULL){
//                 // replace the root with its in order predesasor or sucessor
//                 TreeNode* pred = iop(root);

//                 // after replacing delet that pred/suc
//                 root->val = pred->val;
//                 root->left = deleteNode(root->left , pred->val);
//             }
//         }
//         else if(root->val > key){
//             root->left = deleteNode(root->left , key);
//         }
//         else{
//             root->right = deleteNode(root->right  , key);
//         }
//         return root;
//     }
// };