
// my solution
// class Solution {
// public:
//     TreeNode* helper(TreeNode* root , int val){
//         if(root==NULL){
//             if(root->val > val){
//                 TreeNode* temp = new TreeNode(val);
//                 root->left = temp ;
//                 return root ;
//             } 
//             else{
//                 TreeNode* temp = new TreeNode(val);
//                 root->right = temp ;
//                 return root;
//             }
//         }
//         else if(root->val < val){
//             if((root->right == NULL && root->left->val >val) || (root->left == NULL && root->right== NULL ) ){
//             TreeNode* temp = new TreeNode(val);
//                 root->right = temp;
//                 return root;
//             }
//             else return helper(root->right , val);
//         } 
//         else {
//             if((root->left == NULL && root->right->val > val) || (root->left == NULL && root->right == NULL )){
//                 TreeNode* temp = new TreeNode(val);
//                 root->right = temp;
//                 return root;
//             }
//         }
//         return root;
        
//     };
//     TreeNode* insertIntoBST(TreeNode* root, int val) {
//         TreeNode* mainRoot = root ;
//         helper(root , val);
//         return mainRoot;

//     }
// };


// class Solution {
// public:
   
//     TreeNode* insertIntoBST(TreeNode* root, int val) {
//         if(root == NULL) return new TreeNode(val);
//         else if(root->val > val){// go left
//             if(root->left == NULL){ //attach
//                 root->left = new TreeNode(val);
//                 return root;
//             }
//             else insertIntoBST(root->left , val);

//         }
//         else{
//            if(root->right == NULL){ //attach
//                 root->right = new TreeNode(val);
//                 return root;
//             }
//             else insertIntoBST(root->right , val); 
//         }
//         return root;
//     }
// };