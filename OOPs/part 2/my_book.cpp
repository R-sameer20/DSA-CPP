#include<iostream>
#include<string>
using namespace std;
class book{
    private:
    string name;
    int page;
    int price;

    public:
    //setter names
    void setname(string n){
        name = n;
    }
    void setpage(int x){
        page = x;
    }
    void setprice(int n){
        price = n;
    }

    // getter

    void getname(){
        cout<<"*"<<name<<endl;
    }
    void getpage(){
        cout<<"Page : "<<page<<endl;
    }
    void getprice(){
        cout<<"Price : "<<price<<endl;
    }

    
    void PriceLessThen(int p){
        if(price<p){
            cout<<"YES"<<endl;
            return;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }   
    }

   void IsbookPresent(string b){
        if(name == b){
            cout<<"Present"<<endl;
            return;
        }
        else{
            cout<<"NOT Present"<<endl;
            return;
        }   
    }
};
int main(){
    book b1;
    b1.setname("winter");
    b1.setpage(900);
    b1.setprice(350);

    book b2;
    b2.setname("fight");
    b2.setpage(100);
    b2.setprice(35);

    book b3;
    b3.setname("climb");
    b3.setpage(230);
    b3.setprice(105);

    book b4;
    b4.setname("wall");
    b4.setpage(1205);
    b4.setprice(530);

    book b5;
    b5.setname("run");
    b5.setpage(800);
    b5.setprice(275);

    book b6;
    b6.setname("who");
    b6.setpage(50);
    b6.setprice(30);

    b1.getname();
    b1.getprice();
    b1.getpage();
    cout<<endl;

    b2.getname();
    b2.getprice();
    b2.getpage();
    cout<<endl;

    b3.getname();
    b3.getprice();
    b3.getpage();
    cout<<endl;

    b4.getname();
    b4.getprice();
    b4.getpage();
    cout<<endl;

    b5.getname();
    b5.getprice();
    b5.getpage();
    cout<<endl;

    b6.getname();
    b6.getprice();
    b6.getpage();
    cout<<endl;

    // b1.IsbookPresent("winter");
    // b1.PriceLessThen(3044);
    // cout<<endl;
    // b2.IsbookPresent("climb");
    // b2.PriceLessThen(3044);



}