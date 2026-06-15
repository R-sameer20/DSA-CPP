
// class Solution {
// public:
//     void preOrder(TreeNode* root , vector<int>& ans){
//     if(root == NULL) return;
//     ans.push_back(root->val);
//     preOrder(root->left , ans); //call 1
//     preOrder(root->right , ans);    //call 2   
// }
 
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         preOrder(root , ans);
//         return ans;

//     }
// };

// ittrative way using stack

// class Solution {
// public:

//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         stack<TreeNode*> st;
//         if(root) st.push(root);
//         while(st.size()>0){
//             TreeNode* temp = st.top();
//             st.pop();
//             ans.push_back(temp->val);

//             if(temp->right) st.push(temp->right);
//             if(temp->left) st.push(temp->left);
//         }
//         return ans;
//     }
// };
