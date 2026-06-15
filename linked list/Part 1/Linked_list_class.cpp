#include<iostream>
using namespace std;
class Node{
public:   
    int value;
    Node* next;

    Node(int value){
        this->value = value;
        this->next = NULL;
    }

};

// User defined data structure
class Linkedlist{
public:
    Node* head ;
    Node* tail ;
    int size = 0;

    // constructor
    Linkedlist(){
        head = tail = NULL;
        size = 0;
    }

    void insertAtTail(int value){
        Node* temp = new Node(value);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int value){
        Node* temp = new Node(value); 
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtIdx(int Idx , int value){
        if(Idx < 0 || Idx>size) cout<<"Invalid Index ...!\n";
        else if(Idx == 0) insertAtHead(value);
        else if(Idx == size) insertAtTail(value);
        else{
            Node *t = new Node(value);
            Node *temp = head;
            for(int i = 1 ; i<= Idx -1 ; i++){
                temp =  temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
             
        }

    }

    int getAtIdx(int Idx){
        if(Idx<0 || Idx>=size){
            cout<<"Invalid Index ...!   : \n";
            return -1;
            cout<<endl;
        }
        if(Idx == 0) return head->value;
        if(Idx == size - 1) return tail->value;

        else{
            Node *temp = head;
            for(int i = 1 ; i<=Idx ; i++) {
                temp = temp->next;
            }
            return temp->value;
        }
    }

    void deletAtHead(){
        if(size == 0){
            cout<<"list is empty .....!\n";
            return;
        }
        head = head->next;
        size--;

    }

    void deletAtTail(){
        if(size == 0){
            cout<<"list is empty .....!\n";
            return;
        }
        else{
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
            size--;
        }

    }

    void deletAtIdx(int Idx){
        if(size == 0){
            cout<<"list is empty .....!\n";
            return;
        }

        else if(Idx == 0) return deletAtHead();
        else if (Idx == size-1) return deletAtTail();

        else{
            Node* temp = head;
            for(int i = 1 ; i<=Idx-1 ; i++){
                temp = temp->next;
            }
            temp->next = (temp->next)->next;
            size--;
        }
            

         
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->value<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

   

};
int main(){
    Linkedlist ll ;
    ll.insertAtTail(10);
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.insertAtTail(50);
    ll.insertAtTail(60);
    ll.insertAtTail(70);
    ll.display();


    ll.insertAtHead(65);
    ll.insertAtHead(88);
    ll.insertAtHead(62);
    ll.insertAtHead(15);
    ll.display();

    ll.insertAtIdx(4,-999);
    ll.display();

   

    ll.deletAtHead();
    ll.display();

    ll.deletAtTail();
    ll.display();

    ll.deletAtIdx(3);
    ll.display();
    
    cout<<ll.getAtIdx(5)<<endl;
    


}