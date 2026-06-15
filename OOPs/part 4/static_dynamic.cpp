#include<iostream>
using namespace std;
class Bike{
    public:
    static int NoOFBike;
    int tyreSize;
    int EngineSize;

    // constructor
    Bike( int tyreSize , int EngineSize ){
        this->tyreSize = tyreSize;
        this->EngineSize = EngineSize;
    }
    
    static void increase_bikeNo(){
        NoOFBike++;
       
    }
   
};

 // Explanation by fuction
// void print(){
//     int b = 10;
//     cout<<b<<endl;
//     b++;
// }

// void Staticprint(){
//     static int a = 10;
//     cout<<a<<endl;
//     a++;
// }
int Bike::NoOFBike = 10;
int main(){
 
    Bike tvs(12 , 120); //during memory allcocation constructor get called
    Bike honda(13 , 150);

    cout<<tvs.NoOFBike<<endl;
    cout<<honda.NoOFBike<<endl;

    tvs.increase_bikeNo();

    cout<<tvs.NoOFBike<<endl;
    cout<<honda.NoOFBike<<endl;

    honda.increase_bikeNo();

    cout<<tvs.NoOFBike<<endl;
    cout<<honda.NoOFBike<<endl;
    // cout<<tvs.tyreSize<<"  "<<tvs.EngineSize<<endl;
    // cout<<honda.tyreSize<<"  "<<honda.EngineSize<<endl;

    // Explanation by fuction
    // cout<<"Every time new b for";
    // print();
    // print();
    // print();
    // print();
    // cout<<endl;
    // Staticprint();
    // Staticprint();
    // Staticprint();
    // Staticprint();
  

    

}
