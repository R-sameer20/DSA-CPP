#include<iostream>
#include<algorithm>
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

void displayTree(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);    
}
int sumOfNodes(Node* root ){
    if(root == NULL) return 0;
    // int leftSum = sumOfNodes(root->left);
    // int rightSum = sumOfNodes(root->right);
    // int ans = root->val + leftSum + rightSum;
    // return ans;
    return root->val + sumOfNodes(root->left) + sumOfNodes(root->right);
    
}
int productOfNode(Node* root ){
    if(root == NULL) return 1;
    return root->val * productOfNode(root->left) * productOfNode(root->right);
    
}

int sizeOfTree(Node* root ){
    if(root == NULL) return 0;
    return  1 +  sizeOfTree(root->left) + sizeOfTree(root->right);
    
}

int maxValue(Node* root){
    if(root == NULL) return INT16_MIN;
    // int leftmax = maxValue(root->left);
    // int rightmax = maxValue(root->right);
    // return  max(root->val , leftmax , rightmax);
    return  max(root->val , max(maxValue(root->left) , maxValue(root->right)));
    
}
int minValue(Node* root){
    if(root == NULL) return INT16_MAX;
    int leftmin = minValue(root->left);
    int rightmin = minValue(root->right);
    return  min(root->val , min(leftmin , rightmin));
    
    
}

int levelOfTree(Node* root){
    if(root == 0) return 0;
    // int lefLevel = levelOfTree(root->left);
    // int rightLevel = levelOfTree(root->right);
    // return 1 +  max(lefLevel, rightLevel);
    return 1 + max(levelOfTree(root->left) , levelOfTree(root->right));
} 
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7); 

    a->right = b;
    a->left = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    displayTree(a);
    cout<<endl;
    cout<<sizeOfTree(a)<<endl;
    cout<<sumOfNodes(a)<<endl;
    cout<<productOfNode(a)<<endl;
    cout<<maxValue(a)<<endl;
    cout<<minValue(a)<<endl;
    cout<<levelOfTree(a)<<endl;
    cout<<levelOfTree(a) - 1<<endl; //height of tree
    
}