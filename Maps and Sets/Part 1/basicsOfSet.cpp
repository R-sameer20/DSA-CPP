#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(0);
    s.insert(1);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(0);
    s.insert(1);
    // for each loop

    for(int ele : s){
        cout<<ele<<" ";
    }

    cout<<endl<<s.size();

    s.erase(2);
    cout<<endl;
    int target = 1;

    // if target exist
    if(s.find(target) != s.end()){
        cout<<"target exist";
        cout<<endl;
    }
    else{
        cout<<"target does not exist "<<endl;
    }




}