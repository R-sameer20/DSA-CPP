#include<iostream>
#include<vector>
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

void next_greatest(vector<int>&v){
    int p = v.size();
    vector<int>next(p);
    int max = 0;
    for(int i = 1 ; i<=v.size() ; i++){
        next[i]=max;
        if(max<v[i]){
            max=v[i];
        }
    }
    display(next);
}

void  previous_greatest(vector<int>&v){
    int m  = v.size();
    vector<int>previous(m);
    for(int i = m-2 ; i>=0 ; i--){
        if(v[i]);
    }
  
    
}



int main(){
    vector<int>v ={0,0,1,1,0,0,1,2,2,1,0,0,1,0,1,2,3,3,0,0,1,2,3,0,1,4,0,2,2,0,2};
    
    previous_greatest(v);
    cout<<endl<<endl;
    next_greatest(v);
    
}