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
class Queue{
public:
    Node* head ;
    Node* tail ;
    int s = 0;

    // constructor
    Queue(){
        head = tail = NULL;
        s = 0;
    }
    void push(int value){
        Node* temp = new Node(value);
        if(s==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        s++;
    }
    void pop(){
        if(s == 0){
            cout<<"queue is empty .....!\n"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        s--;
        delete(temp);

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
    Queue q ;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.display();
}