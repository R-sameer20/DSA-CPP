#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
void display(vector<int>&v){
    for(int i = 0 ; i<=v.size()-1 ; i++){
        if(i>v.size()-1){
            break;
        }
        cout<<v[i]<<"  ";
    }
    cout<<endl<<"\n\n";
}
int main(){
    vector<int>v1;
    vector<int>v2;
    
    v1.push_back(1);
    v1.push_back(5);
    v1.push_back(9);
    v1.push_back(77);
    v1.push_back(123);
    v1.push_back(157);
    v1.push_back(159);
    v1.push_back(164);


    v2.push_back(0);
    v2.push_back(69);
    v2.push_back(88);
    v2.push_back(222);
    v2.push_back(369);
    v2.push_back(783);
    v2.push_back(832);
    v2.push_back(885);
    v2.push_back(900);
    v2.push_back(918);
    v2.push_back(926);
    v2.push_back(939);

    cout<<"You entered array1:"<<"\n\n";
    display(v1);

    cout<<"You entered array1:"<<"\n\n";
    display(v2);


    int v1s =v1.size();
    int v2s =v2.size();

    cout<<"\nsize of array 1 : "<<v1s<<"\nsize of array 2 : "<<v2s;
    int i = 0 , j = 0 , k = 0 ;

    vector<int>v3(v1s+v2s) ;
    merge (v1.begin(),v1.end() , v2.begin(),v2.end(),v3.begin());
    

    cout<<"\n\nsorted :"<<"\n";
    display(v3);
}
