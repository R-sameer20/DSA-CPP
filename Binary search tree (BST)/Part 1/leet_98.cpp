
// class Solution {
// public:
//     long long maxOfTree(TreeNode* root){
//         if(root == NULL ) return LLONG_MIN;
//         return max((long long)(root->val) , max(maxOfTree(root->left) , maxOfTree(root->right))); 
//     }

//     long long minOfTree(TreeNode* root){
//         if(root == NULL ) return LLONG_MAX;
//         return min((long long)(root->val) , min(minOfTree(root->left) , minOfTree(root->right))); 
//     }
//     bool isValidBST(TreeNode* root) {
//         if(root == NULL) return true;
//         else if((long long)(root->val) <= maxOfTree(root->left)) return false;
//         else if ((long long)(root->val) >= minOfTree(root->right)) return false;
//         return isValidBST(root->left) && isValidBST(root->right);
        
//     }
// };


// class Solution {
// public:

//     void inOrder(TreeNode* root , vector<int>& ans){
//         if(root == NULL) return;
//         inOrder(root->left , ans);
//         ans.push_back(root->val);
//         inOrder(root->right , ans);
//     }
//     bool isValidBST(TreeNode* root) {
//         vector<int> ans;
//         inOrder(root , ans);
//         bool check = true;
//         for(int i = 1 ; i<ans.size() ; i++){
//             if(ans[i] <= ans[i-1]){
//                 check == false;
//                 return false;
//             }
//         }
//         return true;
        
//     }
// };



// class Solution {
// public:
//     TreeNode* pre = NULL ;
//     bool flag = true;
//     void inOrder(TreeNode* root ){
//         if(root == NULL) return;
//         inOrder(root->left );
//         if(pre!=NULL){
//             if(root->val <= pre->val){
//                flag = false;
//                return ;
//             }
//         }
//         pre = root;
//         inOrder(root->right );
//     }
//     bool isValidBST(TreeNode* root) {
//         inOrder(root);
//         return flag;
        
//     }
// };