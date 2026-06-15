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

void display(Node *head){
    while(head!=NULL){
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;
    

}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);
    Node* g = new Node(70);
    Node* h = new Node(80);
    Node* i = new Node(90);
    Node* j = new Node(100);
    Node* k = new Node(110);
    Node* l = new Node(120);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;
    h->next = i;
    i->next = j;
    j->next = k;
    k->next = l;
    l->next = NULL;

    
    Node *head = a;
    Node *tail = head;
    Node* temp = head;
    int size = 0;
    int n = 4;
    display(head);
    while(temp!=NULL){
        size++;
        temp = temp->next;
        if(temp->next == NULL) tail = temp;
    }

    for(int i = 1 ; i<size-n ; i++){
        tail->next = head ;
        head = head->next;
        tail = tail->next;


    }

    // temp = head;
    // for(int i = 1 ; i<=size-n ; i++ ){
    //     temp = temp->next;
    // }
    // Node *re = temp;
    // for(int i = 1 ; i<=n ; i++){
    //     temp = temp->next;
    //     re->next = head;
    //     head = re;
        
    //     re = temp;
    // }

    display(head);



   

    



    
} 