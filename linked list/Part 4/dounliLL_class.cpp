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

class doubly_linkedlist{
public:
    Node* head ;
    Node* tail ;
    int size = 0;

    // constructor
    doubly_linkedlist(){
        head = tail = NULL;
        size = 0;
    }

    void insertAtTail(int value){
        Node* temp = new Node(value);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            temp->pre = tail ;  //->Extra
            tail = temp;
           
        }
        size++;
    }

    void insertAtHead(int value){
        Node* temp = new Node(value); 
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head->pre = temp;  //->Extra
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
            t->pre = temp;      //->Extra
            t->next->pre = t;   //->Extra
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
            if(Idx < size/2){
                Node *temp = head;
                for(int i = 1 ; i<=Idx ; i++) {
                    temp = temp->next;
                }
                return temp->value;
            }
            else{                   //Extra                         // idx > size/2
                Node *temp = tail;
                for(int i = 1 ; i<size - Idx ; i++) {
                    temp = temp->pre;
                }
                return temp->value;
            }
        }
    }

    void deletAtHead(){
        if(size == 0){
            cout<<"list is empty .....!\n";
            return;
        }
        head = head->next;
        if(head!=NULL) head->pre = NULL;  //->Extra
        if(head == NULL) tail = NULL;     //->Extra
        size--;

    }

    void deletAtTail(){
        if(size == 0){
            cout<<"list is empty .....!\n";
            return;
        }
        else if(size == 1){  //->Extra
            deletAtHead();
            return;
        }

        Node* temp = tail->pre;     //->Extra
            temp->next = NULL;      //->Extra
            tail = temp;            //->Extra
            size--;     
        

    }

    void deletAtIdx(int Idx){
        if(size == 0){
            cout<<"list is empty .....!\n";
            return;
        }
        else if(Idx<0 || Idx>size){
            cout<<"Invalid index : "<<endl;
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
            temp->next->pre = temp;         //->Extra
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
    doubly_linkedlist DLL ;
    DLL.insertAtTail(10);
    DLL.insertAtTail(20);
    DLL.insertAtTail(30);
    DLL.insertAtTail(40);
    DLL.insertAtTail(50);
    DLL.insertAtTail(60);
    DLL.insertAtTail(70);
    DLL.display();


    DLL.insertAtHead(65);
    DLL.insertAtHead(88);
    DLL.insertAtHead(62);
    DLL.insertAtHead(15);
    DLL.display();

    DLL.insertAtIdx(4,-999);
    DLL.display();

   

    DLL.deletAtHead();
    DLL.display();

    DLL.deletAtTail();
    DLL.display();

    DLL.deletAtIdx(3);
    DLL.display();
    
    cout<<DLL.getAtIdx(5)<<endl;
    


}