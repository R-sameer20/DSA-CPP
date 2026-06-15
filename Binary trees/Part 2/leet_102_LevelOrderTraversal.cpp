// My logic
// class Solution {
// public:
// int height(TreeNode* root){
//     if(root==NULL) return 0;
//     return 1 + height(root->left) + height(root->right);
// }
// void fillHelper(TreeNode* root , int curr , int level ,  vector<int>& v){
//     if(root==NULL) return;
//     if(curr == level){
//         v.push_back(root->val);
//         return;
//     }
//     fillHelper(root->left , curr+1 ,level , v);
//     fillHelper(root->right , curr+1 , level , v);

// }
// void helper(TreeNode* root , vector<vector<int>> &ans){
//     int n = height(root);
//     for(int i = 1 ; i<=n ; i++){
//         vector<int> v;
//         fillHelper(root , 1 , i  , v);
//         ans.push_back(v);
//     }
// }

//     vector<vector<int>> levelOrder(TreeNode* root) {
//         vector<vector<int>> ans;
//         helper(root , ans);
//         return ans;
//     }
// };

// next logic
// class Solution {
// public:
// int height(TreeNode* root){
//     if(root==NULL) return 0;
//     return 1 + height(root->left) + height(root->right);
// }
// void fillHelper(TreeNode* root , int curr , int level ,  vector<int>& v){
//     if(root==NULL) return;
//     if(curr == level){
//         v.push_back(root->val);
//         return;
//     }
//     fillHelper(root->left , curr+1 ,level , v);
//     fillHelper(root->right , curr+1 , level , v);

// }
// void helper(TreeNode* root , vector<vector<int>> &ans , int n){
    
//     for(int i = 1 ; i<=n ; i++){
//         vector<int> v;
//         fillHelper(root , 1 , i  , v);
//         ans[i-1] = v;
//     }
// }

//     vector<vector<int>> levelOrder(TreeNode* root) {
//         int n = height(root);
//         vector<vector<int>> ans(n);
//         helper(root , ans , n);
//         return ans;
//     }
// };

// more optimize

// class Solution {
// public:
// int levels(TreeNode* root){
//         if(root == 0) return 0;
//         return 1 + max(levels(root->left) , levels(root->right));
//     }
    

//     void lOrder(TreeNode* root , vector<vector<int>> &ans , int level ){
//         if(root==NULL) return;
//         ans[level].push_back(root->val);  //this is vector where we are pushing
//         lOrder(root->left,ans,level+1);
//         lOrder(root->right,ans,level+1);
//     }
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         int n = levels(root);
//         vector<vector<int>> ans;
//         for(int i = 1 ; i<=n ; i++){
//             vector<int> v;
//             ans.push_back(v);
//         }
//         lOrder(root,ans,0);
//         return ans;
//     }
// };