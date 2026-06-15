#include<iostream>
using namespace std;
class Node {
    public:
    int value;
    Node *next;

    Node(int value){
        this->value = value;
        this->next = NULL;
    }

};


class Linkedlist{
public:
    Node *head;
    int size = 0;

    Linkedlist(){
        head = NULL;
        size = 0;
    }

    void insertAtHead(int value){
        Node *temp = new Node(value);
        if(size == 0){
            head = temp;

        }
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtTail(int value){
        Node* t =new Node(value);
        Node *temp =  head ;
        if(size == 0){
            head = t;
        }
        else{
            while(temp->next != NULL){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
        }
        size++;
    }

    void display(){
        Node *temp = head;
        while(1){
            cout<<temp->value<<" ";
            if(temp->next == NULL) break;
            temp = temp->next;
        }
        cout<<endl;
    }

    void deletAtIdx(int idx){
        Node *temp = head;
        for(int i = 1 ; i<=idx-1 ; i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;

    }

    void deletTheValue(int value){
        Node *temp = head;
        while((temp->next)->value != value)  temp = temp->next;
        temp->next = temp->next->next;
    }

    // void deletNode(Node* head , Node *target){
    //     Node *temp = head;
    //     while(temp->next!= target)  temp = temp->next;
    //     temp->next = temp->next->next;
    // }
};

int main(){
    Linkedlist ll;
    ll.insertAtHead(50);
    ll.insertAtHead(40);
    ll.insertAtHead(30);
    ll.insertAtHead(20);
    ll.insertAtHead(10);

    ll.display();

    ll.insertAtTail(60);
    ll.insertAtTail(70);
    ll.insertAtTail(80);
    ll.insertAtTail(90);

    ll.display();

    // Node *head = 

    // ll.deletNode(head, Node);
    // ll.deletTheValue(40);
    // ll.deletAtIdx(3);

    ll.display();
}