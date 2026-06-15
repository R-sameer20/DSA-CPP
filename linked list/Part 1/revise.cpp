#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float mark;

    Student(string name , int rno , float mark){
        (*this).name = name; 
        this->mark = mark;
        this->rno  = rno;
    }
};
void change(Student* ptr){
    ptr->name = "Balish";
    
}

int main(){
    Student s("sameer" , 60 , 93.20);
    cout<<s.name<<endl;

    Student *ptr = &s;      //address of student
    cout<<ptr<<endl;
    

    (*ptr).name = "Vedant";
    cout<<s.name<<endl;

    ptr->name = "vishal";
    cout<<s.name<<endl;

    change(&s);
    cout<<s.name<<endl;

    
    Student *s1  = new Student("church" , 77 , 96.21);
    cout<<s1->name<<endl;

    change(s1);
    cout<<s1->name<<endl;



    // s.name = "harsh";
    // cout<<s.name<<endl;
    // change(s);          //need to pass by reference to change one way
    // cout<<s.name<<endl;

}