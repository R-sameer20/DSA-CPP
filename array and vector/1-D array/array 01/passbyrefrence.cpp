#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> &a){    //name can b changed of vector
    a[0]=1;
    for(int i=0 ; i<a.size() ; i++){
        cout<<a[i]<<" ";
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

    
    cout<<"intial elements of vector \n ";
    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }

    cout<<endl<<"\n";
    cout<<"updated element of vector :"<<endl;
    change(v);
    cout<<"element of vector initially :"<<endl;
    for(int i=0 ; i<v.size() ; i++){
    cout<<v[i]<<" ";
    }

    cout<<endl<<"\n";
    cout<<"here updation happen in initial / original vector";
    
}