#include<iostream>
#include<string>
using namespace std;
class book{
    public:
    string name;
    int page;
    int price;

    int countBooks(int p){
        if(price<p) return 1;
        else return 0;   
    }

    bool IsbookPresent(string b){
        if(name == b) return true;
        else return false;
    }


};
int main(){
    book winter;
    winter.name = "yes_winter";
    winter.price = 5236;
    winter.page = 900;

    // int Eprice;
    // string bname;

    // cout<<"Enter the price : ";
    // cin>>Eprice;

    // cout<<endl<<"Enter book name : ";
    // cin>>bname;

    cout<<winter.countBooks(200);
    cout<<endl;
    cout<<winter.IsbookPresent("yes_winter");



}