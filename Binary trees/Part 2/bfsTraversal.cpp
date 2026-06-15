#include<iostream>
#include<queue>
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

int levelOfTree(Node* root){
    if(root == NULL) return 0;
    // int lefLevel = levelOfTree(root->left);
    // int rightLevel = levelOfTree(root->right);
    // return 1 +  max(lefLevel, rightLevel);
    return 1 + max(levelOfTree(root->left) , levelOfTree(root->right));
}
// void NthLevel(int currentLevel  , Node* root , int level){
//     if(root == NULL) return;
//     if(currentLevel == level ) cout<<root->val<<" ";
//     currentLevel++;
//     NthLevel( currentLevel , root->left , level );
//     NthLevel( currentLevel , root->right , level);   
// }

// optimize
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

// right to left
void NthLevelRightToLeft(int currentLevel  , Node* root , int level){
    if(root == NULL) return;
    if(currentLevel == level ){
        cout<<root->val<<" ";
        return;
    }
    currentLevel++;
    NthLevelRightToLeft( currentLevel , root->right , level);
    NthLevelRightToLeft( currentLevel , root->left , level );
     
}
void levelOrderReverce(Node* root){
    int n = levelOfTree(root);
    for(int i = 1 ; i<=n ; i++){
        NthLevelRightToLeft(1 , root, i);
        cout<<endl; 
    }
}

void levelOrderQueue(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right); 
    }
    cout<<endl;
}

void levelOrderReverceQueue(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->right != NULL) q.push(temp->right); 
        if(temp->left != NULL) q.push(temp->left);
        
    }
    cout<<endl;
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    int k = 3; //level of element required

    // cout<<endl;
    // NthLevel(1 , a , k);
    // cout<<endl;
    // levelOrder(a);
    // cout<<endl;
    // levelOrderReverce(a);
    // cout<<endl;
    levelOrderQueue(a);
    levelOrderReverceQueue(a);


}