// my logic
// class Solution {
// public:
//     TreeNode* trimBST(TreeNode* root, int low, int high) {
//         if(root == NULL) return NULL;
//         else if(root->val < high && root->val > low){
//             root->left = trimBST(root->left , low , high);
//             root->right = trimBST(root->right , low , high);
//         }
//         else if(root->val > high){
//             if(root->right || root->left){
//                 TreeNode* pred = root->right;
//                 while(pred->val != high){
//                     if(pred->right->val > high){
//                         pred = pred->right;
//                     }
//                     else pred = pred ->left;
//                 }
//                 pred->right = NULL;
//                 return pred;
//             }
//             else return NULL;
            
//         }
//         else if(root->val < low){
//             trimBST(root->right , low , high);
//         }
//         else if (root->val == low ){
//             root->right = NULL ;
//             return root;
//         }
//         else if(root->val == high ){
//             root->left == NULL;
//         }

//         return root;
//     }
// };

// My correct subbmission

//  


// raghav

// class Solution {
// public:
// // raghav logic
// void trim(TreeNode* root , int lo ,int hi){
//     if(root == NULL) return ;
//     while(root->left != NULL){
//         if(root->left->val < lo){
//             root->left = root->left->right;
//         }
//         else if(root->left->val > hi){
//             root->left = root->left->left;
//         }
//         else break;
//     }
//     while(root->right != NULL){
//         if(root->right->val > hi){
//             root->right = root->right->left;
//         }
//         else if(root->right->val < lo){
//             root->right = root->right->right;
//         }
//         else break;
//     }
//     trim(root->left , lo , hi);
//     trim(root->right , lo , hi);


// }
// TreeNode* trimBST(TreeNode* root, int lo, int hi) {
//         TreeNode* dummy = new TreeNode(INT_MAX);
//         dummy->left = root;
//         trim(dummy , lo , hi);
//         return dummy->left;
//     }