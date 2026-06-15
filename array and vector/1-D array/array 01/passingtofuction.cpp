#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> v){
    v[0]=1;
    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<"\n";

}


int main(){
     
    vector <int> v;
    v.push_back (5);
    v.push_back (12);
    v.push_back (55);
    v.push_back (5120);
    v.push_back (845);
    v.push_back (1558);
    v.push_back (55);

    
    cout<<"intial elements of fuction \n ";
    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }

    cout<<endl<<"\n";
    cout<<"updated element of vector :"<<endl;
    change(v);
    cout<<" element of vector :"<<endl;
    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<"\n";
    cout<<"basically vector is passed by value only not pass by reference , new vector form , intial vector not updated";
}