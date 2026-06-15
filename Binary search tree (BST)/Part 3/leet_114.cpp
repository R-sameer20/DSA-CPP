// method 1 
// class Solution {
// public:
//      vector<TreeNode*> preorderTraversal(TreeNode* root) {
//         vector<TreeNode*> ans;
//         // preOrder(root , ans);
//         stack<TreeNode*> st;
//         if(root) st.push(root);
//         while(st.size()>0){
//             TreeNode* temp = st.top();
//             st.pop();
//             ans.push_back(temp);

//             if(temp->right) st.push(temp->right);
//             if(temp->left) st.push(temp->left);
//         }
//         return ans;
//     }


//     void flatten(TreeNode* root) {
//         vector<TreeNode*> ans = preorderTraversal(root); 
//         int n = ans.size();
//         for(int i = 0 ; i<n-1 ; i++){
//             ans[i]->right = ans[i+1];
//             ans[i]->left = NULL;
//         }
        
        
//     }
// };

// recurrsion
 // method 2 recurrsion
    // void flatten(TreeNode* root) {
    //     if(root == NULL ) return ;
    //     TreeNode* l = root->left;
    //     TreeNode* r = root->right;
    //     root->left = NULL;
    //     root->right = NULL;
    //     flatten(l);
    //     flatten(r);
    //     root->right = l;
    //     TreeNode* temp = root;
    //     while(temp->right != NULL){
    //         temp = temp->right;
    //     }
    //     temp->right = r;
   
    // }


     // method 3 Morris traversal
    // void flatten(TreeNode* root) {
    //     if(root == NULL) return ;
    //     TreeNode* curr = root;
    //     while(curr != NULL){
    //         if(curr->left != NULL){
    //             TreeNode* r = curr->right;
    //             curr->right = curr->left;
    //             TreeNode* pred = curr->left;
    //             while(pred->right != NULL){
    //                 pred = pred->right;
    //             }
    //             pred->right = r;
    //             curr = curr->left;
                
    //         }
    //         else{
    //             curr = curr->right;
    //         }
                

    //     }
    //     curr = root;
    //     while(curr->right != NULL){
    //         curr->left = NULL;
    //         curr = curr->right;
    //     }
        
   
    // }