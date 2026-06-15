#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i = 0 ; i<=v.size(); i++){
    cout<<v[i]<<" ";
    }
}



int main(){
    // int n;
    vector<int> v;
    // cout<<"Enter the nnumber of elements in aarray :";
    // cin>>n;

    // cout<<endl<<"Enter the elements of array :"<<endl;

    v.push_back (5);
    v.push_back (12);
    v.push_back (55);
    v.push_back (5120);
    v.push_back (845);
    v.push_back (1558);
    v.push_back (55);


    // for(int i = 0 ; i<n ; i++){
    //     int q ;
    //     cin>>q;
    //     v1.push_back(q);
    //     cout<<endl;
    // }

    display(v);

    cout<<endl;

    vector<int>v1(v.size());
    for(int i = 0 ; i<v1.size() ; i++){
        for(int j = v.size()-1 ; j>0 ; j--){
            v1[i]=v[j];
        }
    }
    display(v1);
    cout<<endl;



}



//ERROR IN PROGRAM
