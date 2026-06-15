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

    // Node(int n , Node* next){
    //     this->n = n;
    //     this->next = next;;

    // }
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

    cout<<(a.next)->value<<endl;
    cout<<(*(a.next)).value<<endl;

    a.next->value = 5555;
    cout<<(a.next)->value<<endl;

    cout<<(a.next)->next<<endl;     //a ke next me b ka address
    cout<<b.next<<endl;             // b ka address
    

    cout<<a.next<<endl;

    // a se c print
    cout<<((a.next)->next)->value<<endl;


    // a se d
    cout<<(*(*(*(a.next)).next).next).value<<endl;
    cout<<(((a.next)->next)->next)->value<<endl;
    // Node a, b , c , d , e , f;
    // a.n=10;
    // b.n = 20;
    // c.n = 30 ; 
    // d.n = 40;
    // e.n = 50 ; 
    // f.n = 60;

    // forming linke
    // a.next = &b;
    // b.next = &c;
    // c.next = &d;
    // d.next = &e;
    // e.next = &f;
    // f.next = NULL;


    // another way
    // Node a(10 , NULL);
    // Node b(20, NULL);
    // Node c(30, NULL);
    // Node d(40, NULL);
    // Node e(50, NULL);
    // Node f(60, NULL);

   

    

    

}