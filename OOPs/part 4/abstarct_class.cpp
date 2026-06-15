#include<iostream>
#include<string>

using namespace std;
class vehicel{
    public:
    virtual void show(){
        cout<<"vehicel ka show : \n";
    }
    virtual void Refule() = 0;
    virtual void milage() = 0;
  
};

class Bike :public vehicel{
    public:
    void show(){
        cout<<"Bike ka show : \n";
    }
    void Refule(){
        cout<<"Refule done \n";
    }
    void milage(){
        cout<<"milage is good \n";
    }

};

int main(){

    vehicel *v;
    v = new Bike;
    v->show();

    Bike b1;
    b1.milage();
    b1.Refule();
    b1.show();

}