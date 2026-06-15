#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> v(5) ;
    cout<<"Enter the  five elements array : ";
    for(int i = 0 ;i<5 ; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cout<<"\n\nsorted : ";
    for(int i = 0 ;i<5 ; i++){
        cout<<v[i]<<" ";
    }

    reverse(v.begin() , v.end());
    cout<<"\n\nsorted desinding  : ";
    for(int i = 0 ;i<5 ; i++){
        cout<<v[i]<<" ";
    }

}