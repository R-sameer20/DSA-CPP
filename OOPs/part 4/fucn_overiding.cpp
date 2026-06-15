#include<iostream>
#include<string>

using namespace std;
class vehicel{
    public:
    int wheel;
    int gear;
    int seat;
    string name; 

    virtual void show(){
        cout<<"Vehicel ka show : \n";
    }

    // if virual is not present
    // Vehicel ka show : 
    // Vehicel ka show : 
    // Vehicel ka show : 
    // Bike ka show :

    // virtual present
    // Vehicel ka show : 
    // Bike ka show :
    // car ka show :
    // E Bike ka show :

};

class Bike :public vehicel{
    public:
    int engine;
    void show(){
        cout<<"Bike ka show : \n";
    }

};

class car : public vehicel{
    public:
    int height;
    void show(){
        cout<<"car ka show : \n";
    }
};

class E_Bike : public Bike{
    public:
    int battery;
    void show(){
        cout<<"E Bike ka show : \n";
    }
};


int main(){
    vehicel v0;
    v0.show();

    vehicel *v1;
    v1 = new Bike;
    v1->show();

    vehicel *v2;
    v2 = new car();
    v2->show();

    Bike *b;
    b = new E_Bike;
    b->show();

}