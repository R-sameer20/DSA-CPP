#include<iostream>
#include<algorithm>
#include<queue>
#include<stack>
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
// MY solution
void leftBoundary (Node* root){
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL ) return;
    cout<<root->val<<" ";
    if(root->left == NULL) leftBoundary(root->right);
    else leftBoundary(root->left);
    
}

void rightBoundary (Node* root){
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL ) return;
    if(root->right == NULL) rightBoundary(root->left);
    else rightBoundary(root->right);
    cout<<root->val<<" ";
    
}

void leaf(Node* root){
    if(root == NULL) return;
    leaf(root->left);
    leaf(root->right);
    if(root->left == NULL && root->right == NULL) cout<<root->val<<" ";
}

void boundarySameer(Node* root){
    // MY logic
    leftBoundary(root);
    leaf(root);
    rightBoundary(root->right);
}

void boundary(Node* root){
    // leftBoundary(root);
    // bottomBoundary(root);
    // rightBoundary(root->right);
}

// void leftBoundary(Node* root){
//     if(root==NULL) return;
//     if(root->left==NULL && root->right == NULL) return;
//     cout<<root->val<<" ";
//     leftBoundary(root->left);
//     if(root->left == NULL)  leftBoundary(root->right);   
// }

// void bottomBoundary(Node* root){
//     if(root==NULL) return;
//     if(root->left==NULL && root->right == NULL) cout<<root->val<<" ";
//     bottomBoundary(root->left);
//     bottomBoundary(root->right);   
// }

// void rightBoundary(Node* root){
//     if(root==NULL) return;
//     if(root->left==NULL && root->right == NULL) return;
    
//     rightBoundary(root->right);
//     if(root->right == NULL)  rightBoundary(root->left);  
//     cout<<root->val<<" "; 
// }


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

        if(j!=n && arr[j]!=INT16_MIN) r = new Node(arr[j]);
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
int main(){
    int arr[] = {1,2,3,4,5,INT16_MIN,6,7,INT16_MIN,8,INT16_MIN,9,10 ,INT16_MIN,11,INT16_MIN,12,INT16_MIN,13,INT16_MIN,14,
                15,16 , INT16_MIN ,17,INT16_MIN,INT16_MIN , 18 , INT16_MIN , 19,INT16_MIN ,INT16_MIN ,INT16_MIN, 20, 21, 22 ,
                23 , INT16_MIN ,24 , 25 , 26 , 27 , INT16_MIN ,INT16_MIN , 28 ,INT16_MIN ,INT16_MIN  };
        
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = construct(arr, n);
    
    cout<<endl;
    boundarySameer(root);
    

    
    
    
        


}