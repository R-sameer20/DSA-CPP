#include<iostream>
using namespace std;
class Bike{
    public:
    int tyreSize;
    int EngineSize;


    
    //constructor compiler type polymorphism
    Bike( int Ts , int Es ) : tyreSize(Ts) , EngineSize(Es){
        
    }

    Bike( int Ts) : tyreSize(Ts) , EngineSize(100){
       
    }

    Bike() : tyreSize(12) , EngineSize(120){
       
    }
    


    // distructor
    ~Bike(){}
};


// fuction parameter explanation 
// void add(int a, int b){
//     cout<< b + a <<endl;
// }

// void add(int a){
//     cout<< 10 + a <<endl;
// }

// void add(int a , double b){
//     cout<< b + a <<endl;
// }


int main(){
    
    Bike tvs(12 , 120); //during memory allcocation constructor get called
    Bike honda(13 , 150);
    Bike bullet;
    Bike yamaha(15);

 

    cout<<tvs.tyreSize<<"  "<<tvs.EngineSize<<endl;
    cout<<honda.tyreSize<<"  "<<honda.EngineSize<<endl;
    cout<<bullet.tyreSize<<"  "<<tvs.EngineSize<<endl;
    cout<<yamaha.tyreSize<<"  "<<honda.EngineSize<<endl;
 

    // add(5);
    // add(4,9);
    // add(7,3.0);

}