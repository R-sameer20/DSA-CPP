#include<iostream>
#include<vector>
using namespace std;

void display(vector <int> &vec ){
    for(int i = 0 ; i<vec.size() ; i++){
        if(i>vec.size()){
            break;
        }
        cout<<vec[i]<<" ";
        }
        cout<<"\n";
}
int main(){
    vector<int> v1 ;
    vector <int> v2 (v1.size()) ;
    v1.push_back(-6);
    v1.push_back(8);
    v1.push_back(0);
    v1.push_back(8);
    v1.push_back(7);
    v1.push_back(4);
    v1.push_back(9);
    v1.push_back(0);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(8);
    v1.push_back(3);
    v1.push_back(-5);
    
    display(v1);
    cout<<endl;


    // for(int i = v1.size() , j = 0 ; i>=0 , j<=v1.size() ; i-- , j++ ){
    //     v2[i]=v1[j];
    // }
   
    
    display(v2);
    cout<<endl;



}