// MY logic 
// class Solution {
// public:
//     TreeNode* findNode(TreeNode* root, int target) {
//     if (root == NULL) return NULL;
//     if (root->val == target) return root;
//     TreeNode* leftSearch = findNode(root->left, target);
//     if (leftSearch != NULL) return leftSearch;
//     return findNode(root->right, target);
// }

//     void fillParentMap ( TreeNode* root ,  unordered_map<TreeNode* , TreeNode*> &parent){
//         if(root == NULL ) return;
//         if(root->left){
//             parent[root->left] = root ;
//             fillParentMap(root->left , parent);
//         }
//         if(root->right){
//             parent[root->right] = root ;
//             fillParentMap(root->right , parent);
//         }

//     }
//     int amountOfTime(TreeNode* root, int start) {
//         TreeNode* startRoot = findNode(root , start);
//         if(!startRoot) return 0;
//         unordered_map<TreeNode* , TreeNode*> parent;
//         fillParentMap(root , parent);

//         unordered_set<TreeNode*> isInfected;
//         isInfected.insert(startRoot);

//         queue< pair<TreeNode* , int>> q;
//         pair<TreeNode* , int> p ;
//         p.first = startRoot ;
//         p.second = 0;
//         q.push(p);

//         int time = 0;
//         while(q.size() != 0){
//             pair<TreeNode* , int> temp = q.front();
//             q.pop();
//             TreeNode* currRoot = temp.first;
//             int currfreq = temp.second;

//             if(currRoot->right && (isInfected.find(currRoot->right) == isInfected.end())){
//                 pair<TreeNode* , int> p ;
//                 p.first = currRoot->right ;
//                 p.second = currfreq + 1;
//                 q.push(p);
//                 isInfected.insert(currRoot->right);
//             }

//             if(currRoot->left && (isInfected.find(currRoot->left) == isInfected.end())){
//                 pair<TreeNode* , int> p ;
//                 p.first = currRoot->left ;
//                 p.second = currfreq + 1;
//                 q.push(p);
//                 isInfected.insert(currRoot->left);
//             }

//             if(parent.find(currRoot) != parent.end()){
//                 TreeNode* currRootParent = parent[currRoot];
//                 if(isInfected.find(currRootParent) == isInfected.end()){
//                     pair<TreeNode* , int> p ;
//                     p.first = currRootParent;
//                     p.second = currfreq + 1;
//                     q.push(p);
//                     isInfected.insert(currRootParent);

//                 }
//             }
//             time = max(currfreq , time);
//             currfreq++;




//         }
//         return time;

//     }
// };


// raghv logic

// class Solution {
// public:
//     TreeNode* first = NULL;
//     void find(TreeNode* root, int start){
//         if(root == NULL ) return ;
//         if(root->val == start){
//             first = root;
//             return;
//         }
//         find(root->left , start);
//         find(root->right , start);
//     }
        
//     void markparent (TreeNode* root , unordered_map<TreeNode* ,TreeNode*>& parent ){
//         if(root == NULL) return;
//         if(root->left) parent[root->left] = root;
//         if(root->right) parent[root->right] = root;
//         markparent(root->left , parent);
//         markparent(root->right , parent);
//     }

//     int amountOfTime(TreeNode* root, int start) {
//         find(root , start);
//         if(first == NULL) return 0;

//         unordered_map<TreeNode* ,TreeNode* > parent;
//         markparent(root , parent);

//         unordered_set<TreeNode*> isInfected;
//         isInfected.insert(first);

//         queue<pair<TreeNode* , int>> q;
//         q.push({first, 0});
        
//         int maxLevel = 0;

//         while(q.size() != 0){
//             pair<TreeNode* , int> p = q.front();
//             q.pop();
            
//             int level = p.second;
//             maxLevel = max(maxLevel , level);
//             TreeNode* temp = p.first;

//             if(temp->left ){
//                 if(isInfected.find(temp->left) == isInfected.end()){
//                     q.push({temp->left , level+1});
//                     isInfected.insert(temp->left);
//                 }
//             }
//             if(temp->right ){
//                 if(isInfected.find(temp->right) == isInfected.end()){
//                     q.push({temp->right , level+1});
//                     isInfected.insert(temp->right);
//                 }
//             }

//             if(parent.find(temp) != parent.end()){
//                 TreeNode* nodeParent = parent[temp];
//                 if(isInfected.find(nodeParent) == isInfected.end()){
//                     q.push({nodeParent , level+1});
//                     isInfected.insert(nodeParent);
//                 }
//             }
//         }
//         return maxLevel;
//     }
// };