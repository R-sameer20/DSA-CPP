
// class Solution {
// public:
//     void inOrderSum(TreeNode* root , int &greatSum){
//         if(root == NULL ) return;
//         inOrderSum(root->left , greatSum );
//         greatSum += (root->val);
//         inOrderSum(root->right , greatSum);

//     }
//     void inOrderFill(TreeNode* root , int &greatSum , int &preSum){
//         if(root == NULL ) return;
//         inOrderSum(root->left , greatSum );
//         if(preSum!= 0){
//             preSum += root->val;
//             root->val = greatSum - preSum -1;   
//         } 
//         inOrderSum(root->right , greatSum );

//     }
//     TreeNode* bstToGst(TreeNode* root) {
//         int greatSum = 0;
//         inOrderSum(root , greatSum );

//         int preSum = 1;
//         inOrderFill(root , greatSum , preSum);
//         return root;

//     }
// };



// class Solution {
// public:
//     int sum = 0;
//     void reverceInOrder(TreeNode* root){
//         // right root left
//         if(root == NULL) return;
//         reverceInOrder(root->right);
//         root->val+=sum;
//         sum = root->val;
//         reverceInOrder(root->left);

//     }
//     TreeNode* bstToGst(TreeNode* root) {
//         reverceInOrder(root);
//         return root;
        
//     }
// };