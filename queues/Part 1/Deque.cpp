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

class Deque{
public:
    Node* head ;
    Node* tail ;
    int s = 0;

    // constructor
    Deque(){
        head = tail = NULL;
        s = 0;
    }

    void pushBack(int value){
        Node* temp = new Node(value);
        if(s==0) head = tail = temp;
        else{
            tail->next = temp;
            temp->pre = tail ;  //->Extra
            tail = temp;
           
        }
        s++;
    }

    void pushFront(int value){
        Node* temp = new Node(value); 
        if(s==0) head = tail = temp;
        else{
            temp->next = head;
            head->pre = temp;  //->Extra
            head = temp;
            
        }
        s++;
    }

    void popFront(){
        if(s == 0){
            cout<<"list is empty .....!\n";
            return;
        }
        head = head->next;
        if(head!=NULL) head->pre = NULL;  //->Extra
        if(head == NULL) tail = NULL;     //->Extra
        s--;

    }

    void popBack(){
        if(s == 0){
            cout<<"list is empty .....!\n";
            return;
        }
        else if(s == 1){  //->Extra
            popFront();
            return;
        }

        Node* temp = tail->pre;     //->Extra
            temp->next = NULL;      //->Extra
            tail = temp;            //->Extra
            s--;     
        

    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->value<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    int front(){
        if(s == 0){
            cout<<"queue is empty .....!\n"<<endl;
            return -1 ;
        }

        return head->value;
    }
    int back(){
        if(s == 0){
            cout<<"queue is empty .....!\n"<<endl;
            return -1 ;
        }

        return tail->value;
    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0)return true;
        else false;
    }

   

};
int main(){
    Deque dq ;
    dq.pushFront(10);
    dq.pushFront(20);
    dq.pushFront(30);
    dq.pushBack(40);
    dq.pushBack(50);
    dq.pushBack(60);
    dq.pushBack(70);
    dq.pushFront(80);
    dq.display();
    


}