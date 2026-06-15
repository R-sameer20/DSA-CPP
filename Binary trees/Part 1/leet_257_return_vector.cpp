
// class Solution {
// public:
//     void path(TreeNode* root ,  vector<string> &ans ,string str){
//         if(root->left==NULL && root->right ==NULL){
//             str.append(to_string(root->val));
//             ans.push_back(str);
//             return;
//         }
//         if(root->left==NULL || root->right ==NULL) return;
//         str.append(to_string(root->val));
//         path(root->left , ans , str);
//         path(root->right , ans , str);
//     }

//     vector<string> binaryTreePaths(TreeNode* root) {
//         vector<string> ans;
//         string str = "";
//         path(root , ans , str);
//         return ans;
//     }
// };


// class Solution {
// public:
//     void path(TreeNode* root ,  vector<string>& ans ,string str){
//         if(root==NULL) return;
//         string s = to_string(root->val);
//         if(root->left==NULL && root->right == NULL){
//             str += s;
//             ans.push_back(str);
//             return;
//         }
//         path(root->left , ans , str+s+"->");
//         path(root->right , ans , str+s+"->");
//     }

//     vector<string> binaryTreePaths(TreeNode* root) {
//         vector<string> ans;
//         path(root , ans , "");
//         return ans;
//     }
// };