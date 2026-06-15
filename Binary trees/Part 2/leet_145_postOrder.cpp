
// class Solution {
// public:
//  void postOrder(TreeNode* root , vector<int>& ans){
//         if(root == NULL) return;
//         postOrder(root->left , ans); //call 1
//         postOrder(root->right , ans);    //call 2
//         ans.push_back(root->val); // work   
//     }
//     vector<int> postorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         postOrder(root , ans);
//         return ans;
//     }
// };

// ittrativr solution using stack
// class Solution {
// public:

//     vector<int> postorderTraversal(TreeNode* root) {
//         vector<int> ans;
        
//         stack<TreeNode*> st;
//         if(root) st.push(root);
//         while(st.size()>0){
//             TreeNode* temp = st.top();
//             st.pop();
//             ans.push_back(temp->val);
//             if(temp->left) st.push(temp->left);
//             if(temp->right) st.push(temp->right);
            
//         }
//         reverse(ans.begin(), ans.end());
//         return ans;
//     }
// };



