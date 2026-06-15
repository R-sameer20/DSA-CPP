#include<iostream>
using namespace std;
class Bike{
    public:
    int tyreSize;
    int EngineSize;

    //constructor
    // Bike( int tyreSize , int EngineSize ){

    //     this->tyreSize = tyreSize;
    //     this->EngineSize = EngineSize;
    //     cout<<"Construtor called : "<<endl;
    // }

    
    //constructor method 2
    Bike( int Ts , int Es ) : tyreSize(Ts) , EngineSize(Es){
        cout<<"Construtor called : "<<endl;
    }

    // distructor
    ~Bike(){
        cout<<"Distructor called"<<endl;
    }
};
int main(){
    Bike tvs(12 , 120); //during memory allcocation constructor get called
    Bike honda(13 , 150);
    Bike RoyalEnfiels(16 , 350);
    bool flag = true;
    if ( flag == true){
        Bike BMW(20 , 600);
        cout<<BMW.tyreSize<<"  "<<BMW.EngineSize<<endl;
    }
    

    cout<<tvs.tyreSize<<"  "<<tvs.EngineSize<<endl;
    cout<<honda.tyreSize<<"  "<<honda.EngineSize<<endl;
    cout<<RoyalEnfiels.tyreSize<<"  "<<RoyalEnfiels.EngineSize<<endl;

    

}