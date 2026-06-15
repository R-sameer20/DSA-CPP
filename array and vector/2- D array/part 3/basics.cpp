#include<iostream>
#include<vector>
using namespace std;
int main(){
   
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);

    vector<int> v3;
    v3.push_back(5);
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);


    vector< vector <int> > v ;      //{{1,2,3},{4,5},{6,7,8,9}}
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout<<v[0][1]<<endl;
    cout<<v[2][2]<<endl;
    cout<<v[1][1]<<endl;
    cout<<v[2][2]<<endl;
    cout<<v[0][0]<<endl;

    cout<<v[0][3]<<endl;//scenc no elemnt present in thtt place 0 valus eprint invalid nerror 
    
}
