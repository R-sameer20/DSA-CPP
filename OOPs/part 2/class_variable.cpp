#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class player{
    public:
    int score;
    int health;
    string name;

    void showHEalth(){
        cout<<"Health is : "<<health<<endl;
    }
    void showscore(){
        cout<<"score is : "<<score<<endl;
    }
};
int main(){
    player sameer; 
    sameer.score = 90;
    sameer.health = 82;
    sameer.name = "sameer";

    cout<< sameer.name<<endl;
    cout<< sameer.score<<endl;
    cout<< sameer.health<<endl;
    
    sameer.showHEalth();
    sameer.showscore();




}