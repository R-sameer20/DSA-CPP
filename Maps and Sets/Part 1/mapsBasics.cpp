#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    // pair<int , int > p;
    // p.first = 10;
    // p.second = 20;
    // cout<<p.first<<" "<<p.second<<endl;

    // pair<string , int > str;
    // str.first = "sameer";
    // str.second = 2;
    // cout<<str.first<<" "<<str.second<<endl;


    unordered_map<string , int > mp;

    pair<string , int> p1;
    p1.first= " sameer";
    p1.second = 1;
    
    pair<string , int> p2;
    p2.first= " gujar";
    p2.second = 2;
    

    pair<string , int> p3;
    p3.first= " dhan";
    p3.second = 3;


    mp.insert(p1);
    mp.insert(p2);
    mp.insert(p3);
  

    for(pair<string , int> p : mp){
        cout<<p.first<<" "<<p.second<<endl;
    }

    for(auto p : mp){
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<endl<<endl;
    // method 2 of insertion
    unordered_map<string , int > mp1;

    pair<string , int > p7;
    p7.first = "sam";
    p7.second = 2;
    mp1.insert(p7);

    cout<<endl<<mp1.size()<<endl;

    mp1["krishna"] = 55;
    mp1["rudra"] = 45;
    mp1["akash"] = 84;
    mp1["vanish"] = 54;

    for(auto p : mp1){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl<<mp1.size()<<endl;
    mp1.erase("sam");

    cout<<endl<<endl;
    for(auto p : mp1){
        cout<<p.first<<" "<<p.second<<endl;
    }

    mp1.erase("sanket");
    cout<<endl<<mp1.size()<<endl;


}