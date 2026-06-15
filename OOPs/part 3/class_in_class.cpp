#include<iostream>
using namespace std;
class Gun{
    private:
    int ammo;
    int damage;
    int scope;

    public:
    // setting attributies
    void steammo( int ammo){
        this->ammo = ammo;
    }
    void stedamage( int damage){
        this->damage = damage;
    }
    void stescope( int scope){
        this->scope = scope;
    }

    // getting attributrs
    int getammo(){
        return ammo;
    }
    int getdamage(){
        return damage;
    }
    int getscope(){
        return scope;
    }
};
class player{
    private:
    int health;
    int score;
    int age;
    bool alive;
    Gun gun;

    public:
    // setting
    void sethealth(int health){
        this->health = health;
    }
    void setscore(int score){
        this->score = score;
    }
    void setage(int age){
        this->age = age;
    }
    void setIsalive(bool alive){
        this->alive = alive;
    }
    void setGun(Gun gun){
        this->gun = gun;
    }
   

    // getting
    int gethealth(){
        return health;
    }
    int getscore(){
        return score;
    }
    int getage(){
        return age;
    }
    bool getIsalive(){
        return alive;
    }
    Gun getGun(){
        return gun;
    }
};

int main(){
    player harsh;
    player raghav;

    Gun ak47;
    ak47.steammo(100);
    ak47.stedamage(37);
    ak47.stescope(4);

    Gun awm;
    awm.steammo(7);
    awm.stedamage(157);
    awm.stescope(8);

    harsh.setage(23);
    harsh.sethealth(99);
    harsh.setscore(85);
    harsh.setIsalive(true);
    harsh.setGun(ak47);

    raghav.setage(30);
    raghav.sethealth(60);
    raghav.setscore(47);
    raghav.setIsalive(false);
    raghav.setGun(awm);


    Gun raghavGun = raghav.getGun();
    cout<<raghavGun.getammo()<<endl;
    cout<<raghavGun.getdamage()<<endl;
    cout<<raghavGun.getscope()<<endl;
    cout<<endl;
    Gun harshGun = harsh.getGun();
    cout<<harshGun.getammo()<<endl;
    cout<<harshGun.getdamage()<<endl;
    cout<<harshGun.getscope()<<endl;
}