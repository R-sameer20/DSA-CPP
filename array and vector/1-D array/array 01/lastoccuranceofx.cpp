#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n , x , idx = 1;

    cout<<"Enter number of elements you want :";
    cin>>n;
    vector<int> v;
    for(int i = 0 ; i<n ; i++){
        int x ;
        cin>>x;
        v.push_back (x);
    }
    cout<<"Enter elements are  :";
    for(int i = 0 ; i<n ; i++){
        cout<<v[i]<<"  ";
    
    }
    cout<<endl<<"\n";
    cout<<"size of vector =  "<<v.size()<<endl;
    cout<<"capacity of vector =  "<<v.capacity()<<endl<<"\n";

    cout<<"Enter element to check last occurance :";
    cin>>x;
    for(int i = 0 ; i< v.size() ; i++){
        if(v[i]==x){
            idx=i;
        }
    }


    cout<<endl;
    cout<<"last occuranc of given element x is (index) :";
    cout<<idx;
   
    
}