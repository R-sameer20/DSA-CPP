#include<iostream>
#include<algorithm>
#include<limits>
using namespace std;
class player{
    private:
    int age;
    int health;
    int score;
    bool alive;

    public:
    // setting 
    void setage(int age){
        this->age = age;
    }
    void setscore(int score){
        this->score = score;
    }
    void sethealth(int health){
        this->health = health;
    }
    void setIsalive(bool alive){
        this->alive = alive;
    }

    // getting 
    int getage(){
        return age;
    }
    int getscore(){
        return score;
    }
    int gethealth(){
        return health;
    }
    bool getIsalive(){
        return alive;
    }
};

int addScore(player a  ,  player b){
    return a.getscore() + b.getscore();
}

player maxScore(player a , player b){
    if(a.getscore() > b.getscore()) return a;
    else return b;
}

int main(){
    player harsh; //obj creation statically
    player raghav;

    // method 1
    player *urvi = new player;
    player urviobject = *urvi;

    player* akash = new player;

    harsh.setage(32);
    harsh.sethealth(99);
    harsh.setIsalive(true);
    harsh.setscore(52);

    raghav.setage(28);
    raghav.sethealth(0);
    raghav.setIsalive(false);
    raghav.setscore(85);

    urviobject.setage(25);
    urviobject.sethealth(85);
    urviobject.setIsalive(true);
    urviobject.setscore(60);

    akash->setage(18);
    akash->sethealth(50);
    akash->setIsalive(true);
    akash->setscore(92);

    cout<<urviobject.getscore();
    cout<<endl;

    cout<<akash->getscore();
    cout<<endl;
    

    cout<<addScore(harsh,raghav);
    cout<<endl;
    player temp = (harsh , raghav);
    cout<<endl;
    cout<<temp.getscore();
    cout<<endl<<urviobject.getscore();
    cout<<endl;
}
