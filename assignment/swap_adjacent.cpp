#include<iostream>
using namespace std;
class Node{
    public:
    int val ;
    Node* next ;

    Node(int val){
        val = this->val;
        this->next = NULL;

    }

};
void display(Node head){
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    Node e(50);
    Node f(60);
    Node g(70);
    Node h(80);
   
    a.next = &b;
    b.next = &c;
    c.next =&d;
    d.next = &e;
    e.next = &f;
    f.next = &g;
    g.next = &h;
    h.next = NULL;

    display(a);


    



}