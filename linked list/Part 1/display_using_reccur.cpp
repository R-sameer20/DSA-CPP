#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next;

    Node(int value){
        this->value =value;
        this->next = NULL;
    }

};

// display all
void display(Node* head){
    if(head==NULL) return;
    cout<<head->value<<" ";
    display(head->next);
    // cout<<"  done"<<" ";   
}

// reverseDisplay
void reverseDisplay(Node* head){
    if(head==NULL) return;
    display(head->next); 
    cout<<head->value<<" ";
       
}

int main(){
    Node* a = new Node (10);
    Node* b = new Node (20);
    Node* c = new Node (30);
    Node* d = new Node (40);
    Node* e = new Node (50);
    Node* f = new Node (60);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    cout<<endl;

    display(a);
    cout<<endl;
    reverseDisplay(a);
     


}