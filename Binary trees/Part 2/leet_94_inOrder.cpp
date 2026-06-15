
// class Solution {
// public:
//     void inOrder(TreeNode* root , vector<int>& ans){
//         if(root == NULL) return;
//         inOrder(root->left , ans); //call 1
//         ans.push_back(root->val); // work
//         inOrder(root->right , ans);    //call 2   
//     }
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         inOrder(root , ans);
//         return ans;
//     }
// };

// itratiev new method


// class Solution {
// public:
//     // void inOrder(TreeNode* root , vector<int>& ans){
//     //     if(root == NULL) return;
//     //     inOrder(root->left , ans); //call 1
//     //     ans.push_back(root->val); // work
//     //     inOrder(root->right , ans);    //call 2   
//     // }
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         // inOrder(root , ans);

//         stack<TreeNode*> st;
//         TreeNode* node = root; 
//         while(st.size()>0 || node!=NULL){
        
//         if(node!=NULL){
//             st.push(node);
//             node = node->left;
//         }
//         else{
            
//             TreeNode* temp = st.top();
//             st.pop();
//             ans.push_back(temp->val);
//             node = temp->right;
//         }    
//         }
//         return ans;
//     }
// };