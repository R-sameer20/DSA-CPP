//using swaping of elements 
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i = 0 ; i<=v.size(); i++){
    cout<<v[i]<<" ";
    }
}

int main(){
    vector<int> v;

    v.push_back (5);
    v.push_back (12);
    v.push_back (55);
    v.push_back (5120);
    v.push_back (845);
    v.push_back (1558);
    v.push_back (55);

    display(v);
    cout<<endl;

    int i = 0 ;
    int j =v.size()-1;
    // for( i=0 ;  j = v.size() ; i<= j; i++ ; j--){
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j]=temp;
    // }


    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }

    display(v);
    cout<<endl;




}