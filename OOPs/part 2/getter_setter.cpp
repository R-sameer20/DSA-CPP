#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class player{
    private:
    int score;
    int health;
    int rank;
    
    public:
    void setScore(int s){
        score = s;
    }
    void sethealth(int h){
        health = h;
    }
    void setrank(int r){
        rank = r;
    }

    void getScore(){
        cout<<score<<endl;
    }
    void gethealth(){
        cout<<health<<endl;
    }
    void getrank(){
        cout<<rank<<endl;
    }
};
int main(){
    player amit; 
    amit.setScore(55);
    amit.sethealth(99);
    amit.setrank(77);

    amit.getScore();
    amit.gethealth();
    amit.getrank();

}