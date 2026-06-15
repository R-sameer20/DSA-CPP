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

// void display(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->value<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

void display(Node* head){
   
    while(head!=NULL){
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;
}

int size(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        temp = temp->next;
        count++;
        
    }
    cout<<endl;
    return count;
}

void insertAtTail(Node* head , int value){
    Node* temp = new Node(value);
    while(head->next != NULL) head = head->next;
    head->next = temp  ; 
    
    
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

    cout<<a->next->value<<endl;
    cout<<a->next->next->value<<endl;
    cout<<a->next->next->next->next->value<<endl;
    cout<<endl;

    display(a);

    cout<<size(a)<<endl;
    insertAtTail(a,70);
     display(a);

    // Node* temp = a;
    // while(temp!=NULL){
    //     cout<<temp->value<<" ";
    //     temp = temp->next; 
    // }

}