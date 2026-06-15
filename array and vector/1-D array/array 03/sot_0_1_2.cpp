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
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(2);
 
    
    cout<<"You entered :"<<"\n";
    display(v);

    int m = v.size();
    int zero = 0 , one = 0 ,two = 0 ;
    for(int i = 0 ; i<=m-1 ; i++){
        if(v[i]==0){
            zero++;
        }
        if(v[i]==1){
            one++;
        }
        if(v[i]==2){
            two++;
        }
    }
    cout<<endl<<zero<<" "<<one<<" "<<two<<endl;

    for(int i = 0 ; i<=m-1 ; i++){
        if(i<zero){
            v[i]=0;
        }
        else if(i<zero+one){
            v[i]=1;
        }
        else{
            v[i]=2;
        }
    }

    cout<<"sorted :"<<"\n";
    display(v);
}
