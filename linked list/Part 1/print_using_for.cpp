#include<iostream>
using namespace std;
class Node{
public:
    int value;
    Node* next;
    // fimal way yo do 
    Node(int value ){
        this->value = value;
        this->next = NULL;
    }
};
int main(){

    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    Node e(50);
    Node f(60);

    // forming linke
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = &f;
    f.next = NULL;

    Node temp = a;

    while(1){ //always true
        cout<<temp.value<<" ";
        if(temp.next==NULL) break;
        temp = (*(temp.next));
    }


    // a se c print
    // cout<<((a.next)->next)->value<<endl;
    // a se d
    // cout<<(*(*(*(a.next)).next).next).value<<endl;
    // cout<<(((a.next)->next)->next)->value<<endl;


   

    

    

}