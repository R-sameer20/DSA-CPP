#include<iostream>
using namespace std;
class Node{
public:
    int value;
    Node *next;

    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};

// class Linkeslist{
// public:
//     Node *head;
//     int size = 0;

//     Linkeslist(){
//         head = NULL;
//         size = 0;
//     }
// };

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);
    Node* g = new Node(70);
    Node* h = new Node(80);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;


    Node *head = a;

    // solution 1
    // Node *temp = head;
    // int size = 0;
    // while(temp->next != NULL){
    //     size++;
    //     temp = temp->next;
        
    // }
    // Node *mid = head;
    // int midIdx = size/2;

    // for(int i = 0 ; i<=midIdx ; i++){
    //     mid = mid->next;
    // }

    // cout<<mid->value;

    // solution 2

    Node *slow = head;
    Node *fast = head;

    while( fast!=NULL  &&  fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

    }

    cout<<slow->value;



    
}
