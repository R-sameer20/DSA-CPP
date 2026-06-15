#include<iostream>
using namespace std;
class vehicle{
    public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyName;

    vehicle(){
        cout<<"vichele ka constructor call hua : \n";
    }

    void showcOMPANY(){
        cout<<companyName<<endl;
    }
};

class car : public vehicle{
    public:
    int steringSize;
};

class Bike : public vehicle{
    public:
    int handleSize;
    Bike(){
        cout<<"Bike ka constructor call hua : \n";
    }
};
int main(){
   Bike Honda;
   Honda.tyreSize = 12;
   Honda.engineSize = 12;
   Honda.lights = 5;
   Honda.tyreSize = 12;
   Honda.companyName = "HONDA";
   Honda.showcOMPANY();
}