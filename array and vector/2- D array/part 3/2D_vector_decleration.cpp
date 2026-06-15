#include<iostream>
#include<vector>
using namespace std;
// void change(vector< vector<int> > &v){
//      v[0][0]=100;

// }
// void length(vector< vector<int> > &v){
//     cout<<v.size();
// }
int main(){
    vector<int> v(5);
    cout<<"when no value is pushed backed : \n";
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    cout<<v[4]<<" ";
    cout<<endl;
    cout<<"when (5,2) is written :\n";
    vector<int> v1(5,2);
     cout<<v1[0]<<" ";
    cout<<v1[1]<<" ";
    cout<<v1[2]<<" ";
    cout<<v1[3]<<" ";
    cout<<v1[4]<<" ";
   

    vector< vector<int> > v2(3 , vector<int> (4)); // here 3 vector of size 4 can insert in v2
   
    vector< vector<int> > v3(3 , vector<int> (4,20));// here 3 vector of size 4 can insert in v3 where every element is 2
    cout<<"size of vector :";
    cout<<v3.size();
    cout<<"\n\n printing elements of vector like array :\n";
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<4 ; j++){
            cout<<v3[i][j]<<"  ";
        }
        cout<<endl;
    }

}