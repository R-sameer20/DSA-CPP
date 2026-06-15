#include<iostream>
#include<queue>
#include<unordered_map>
#include<unordered_set>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;


    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};


// void levelOrderQueue(Node* root){
//     queue<Node*> q;
//     q.push(root);
//     while(q.size()>0){
//         Node* temp = q.front();
//         q.pop();
//         cout<<temp->val<<" ";
//         if(temp->left != NULL) q.push(temp->left);
//         if(temp->right != NULL) q.push(temp->right); 
//     }
//     cout<<endl;
// }
int levelOfTree(Node* root) {
    if (root == NULL) return 0;
    return 1 + max(levelOfTree(root->left), levelOfTree(root->right));
}

void NthLevelLeftToRight(int currentLevel  , Node* root , int level){
    if(root == NULL) return;
    if(currentLevel == level ){
        cout<<root->val<<" ";
        return;
    }
    currentLevel++;
    NthLevelLeftToRight( currentLevel , root->left , level );
    NthLevelLeftToRight( currentLevel , root->right , level);   
}

void levelOrder(Node* root){
    int n = levelOfTree(root);
    for(int i = 1 ; i<=n ; i++){
        NthLevelLeftToRight(1 , root, i);
        cout<<endl;
    }
}


Node* construct(int arr[] , int n){
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while(q.size()>0 && i<n){
        Node* temp = q.front();
        q.pop();

        Node* l;
        Node* r;

        if(arr[i]!=INT16_MIN) l = new Node(arr[i]);
        else l = NULL;

        if(j < n && arr[j] != INT16_MIN) r = new Node(arr[j]);
        else r = NULL;

        temp->left = l;
        temp->right = r;

        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        
        i+=2;
        j+=2;

    }
    return root;
}

void topView(Node* root){
    unordered_map<int , int > m;
    queue< pair<Node*,int> > q;
    pair<Node*,int> r;
    r.first = root;
    r.second = 0;
    q.push(r);

    

    while(q.size()>0){
        Node* temp = (q.front()).first;
        int level =  (q.front()).second;
        q.pop();
        if(m.find(level) == m.end()){
            m[level] = temp->val;
        }
        if(temp->left != NULL){
            pair<Node*,int>p;
            p.first = temp->left;
            p.second = level -1 ;
            q.push(p);
        }
        if(temp->right != NULL){
            pair<Node*,int>p;
            p.first = temp->right;
            p.second = level+1 ;
            q.push(p);
        }

    }
    int minVerticalLevel = INT16_MAX;
    int maxVerticalLevel = INT16_MIN;
    for(auto ele : m){
        int level = ele.first;
        minVerticalLevel = min(minVerticalLevel,level);
        maxVerticalLevel = max(maxVerticalLevel,level);
    }

    for(int i = minVerticalLevel ; i<=maxVerticalLevel ; i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;


}

int main(){
    // construct
    int arr[] = {1,2,3,4,5,INT16_MIN ,6 ,INT16_MIN , INT16_MIN , 7 ,8 };
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = construct(arr , n);
    // levelOrderQueue(root);
    levelOrder(root);
    cout<<endl;
    topView(root);


}