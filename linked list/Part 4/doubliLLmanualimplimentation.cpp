#include<iostream>
using namespace std;
class Node{
public:   
    int value;
    Node* next;
    Node* pre;


    Node(int value){
        this->value = value;
        this->next = NULL;
        this->pre = NULL;
    }

};
void display(Node* head){ //O(1) space
    while(head){
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;
}

void displa_reverse(Node* tail){ //O(1) space
    while(tail){
        cout<<tail->value<<" ";
        tail = tail->pre;
    }
    cout<<endl;
}

void displayRec(Node* head){ //O(n) space
    if(head == NULL ) return;
    cout<<head->value<<" ";
    displayRec(head->next);
}

void displayRec_reverse(Node* head){
    if(head == NULL ) return;
    displayRec_reverse(head->next);
    cout<<head->value<<" ";
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    // forward
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    // backward

    e->pre = d;
    d->pre = c;
    c->pre = b;
    b->pre = a;

    display(a);
    displayRec(a);
    cout<<endl;
    displayRec_reverse(a);
    cout<<endl;
    displa_reverse(e);
}