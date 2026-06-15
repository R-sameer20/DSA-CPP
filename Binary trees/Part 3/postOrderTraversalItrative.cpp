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
void postOrderItrtive(Node* root , vector<int> &ans){
    stack<Node*> st;
    st.push(root);
    while(st.size()>0){
        Node* temp = st.top();
        st.pop();
        ans.push_back(temp->val);
        if(temp->left) st.push(temp->left);   //first check left then right
        if(temp->right) st.push(temp->right);
        
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
    vector<int> ans;
    postOrderItrtive(a , ans);
    for(int i = 0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    reverse(ans.begin(), ans.end());
    for(int i = 0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
    
    


}