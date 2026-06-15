#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n ;
    cout<<"Enter number of elements you want :";
    cin>>n;
    vector<int> v;
    cout<<endl<<"Enter the elements :";
    for(int i = 0 ; i<n ; i++){
        int x ;
        cin>>x;
        v.push_back (x);
    }
    cout<<endl<<"your entered elements are :";
    for(int i = 0 ; i<n ; i++){
        cout<<v[i]<<" ";
    }
    
}