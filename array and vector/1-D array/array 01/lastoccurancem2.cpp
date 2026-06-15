#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n , x , idx = 1;

    cout<<"Enter number of elements you want :";
    cin>>n;
    vector<int> v;
    cout<<endl<<"Enter the elements :";
    for(int i = 0 ; i<n ; i++){
        int x ;
        cin>>x;
        v.push_back (x);
    }
    cout<<endl<<"Enter elements are  :";
    for(int i = 0 ; i<n ; i++){
        cout<<v[i]<<"  ";
    
    }
    cout<<endl<<"\n";
    cout<<"size of vector =  "<<v.size()<<endl;
    cout<<"capacity of vector =  "<<v.capacity()<<endl<<"\n";

    cout<<"Enter element to check last occurance :";
    cin>>x;
    for(int i =v.size()-1 ; i>0 ; i--){         //optimized by starting from behind<---
        if(v[i]==x){
            idx=i;
            break;
        }
    }


    cout<<endl;
    cout<<"last occuranc of given element x is (index) :"<<idx<<"  according to vector because its start from 0";
    cout<<"\nlast occuranc of given element x is (index) :"<<idx+1;
   
    
}