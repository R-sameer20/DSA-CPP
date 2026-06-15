#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(-9);
    s.insert(1);
    s.insert(45);
    for(int ele : s){
        cout<<ele<<" ";
    }
    cout<<endl;


    map<string , int > m;
    m["kunal"] = 2;
    m["akash"] = 5;
    m["atharva"] = -8;
    m["zoya"] = 1;
    for(auto ele : m){
        cout<<ele.first<<" ";
    }
    cout<<endl;
    for(auto ele : m){
        cout<<ele.second<<" ";
    }
    cout<<endl;
    for(auto ele : m){
        cout<<ele.first<<" "<<ele.second<<" "<<endl;
    }
    cout<<endl;

}