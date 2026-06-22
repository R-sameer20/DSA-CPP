#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;

    }

};

void inOrder(Node* root , vector<int>& arr){
    if(root==NULL) return ;
    inOrder(root->right , arr);
    arr.push_back(root->val);
    inOrder(root->left, arr);

}

void printVector( vector<int> v){
    for(int i = 0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(5);
    Node* c = new Node(16);
    Node* d = new Node(1);
    Node* e = new Node(8);
    Node* f = new Node(12);
    Node* g = new Node(20);

    a->left = b; a->right = c;
    b->left = d; b->right = e;
    c->left = f;  c->right = g;

    vector<int> arr; //reverse order
    inOrder(a , arr);
    printVector(arr);


   
}