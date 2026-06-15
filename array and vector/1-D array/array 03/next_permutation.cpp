#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>v={1,2,4,3};
    int n = v.size();
    int idx ;
    for(int i = n-2 ; i>=0 ; i--){
        if(v[i]<v[i+1]){
            idx=i;
           break;
        }
    }
    cout<<"pivot index = " <<idx;

    
}