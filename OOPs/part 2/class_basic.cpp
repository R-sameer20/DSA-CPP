#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class player{
    public:
    int score;
    private:
    int health;
    public:
    string name;
};
int main(){
   player sameer; 
   sameer.score = 90;
//    sameer.health = 82;
   sameer.name = "sameer";

   cout<<sameer.name<<endl;
   cout<<sameer.score<<endl;
//    cout<<sameer.health<<endl;

}