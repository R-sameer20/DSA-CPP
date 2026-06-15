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

class linkedlist{
    public:
    Node* head;
    int size;

    linkedlist(){
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
        Node *t =  new Node(value);
        Node *temp = head;
        if(size == 0){
            head = t;
            return;
        }
        while(temp->next!=NULL){
            temp = temp->next;
        }
        t->next = temp->next;
        temp->next = t;
        size++;
    }

    void insertAtIdx(int Idx , int value){
            Node *t =  new Node(value);
            Node *temp = head;
            if(size == 0){
                head = t;
            }
            else if(Idx<0 || Idx>size){
                cout<<"Invalid index.....!\n";
            }
            else if (Idx==0){
                 insertAtHead(value);
                 return;
            }

            else if (Idx==size){
                 insertAtTail(value);
                 return;
            }
            
            else{
                for(int i = 1 ; i<=Idx-1 ; i++){
                    temp = temp->next;
                }
                
                t->next = temp->next;
                temp->next = t;

            }
            size++;       
    }

    int getAtIdx(int Idx){
        Node *temp = head;
        for(int i = 0 ; i<=Idx - 1 ; i++){
            temp = temp->next; 
        }
        return temp->value;
    }
    

    void display(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->value<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    

};
int main(){
    linkedlist ll;
    ll.insertAtHead(50);
    ll.display();
    ll.insertAtTail(55);
    ll.insertAtTail(99);
    ll.insertAtTail(32);
    ll.insertAtTail(60);
    ll.insertAtTail(80);

    
    ll.display();

    ll.insertAtIdx(2,8532);
    ll.display();
    cout<<ll.size<<endl;

    cout<<ll.getAtIdx(3);


}