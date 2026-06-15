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
    int n = v.size();
    vector<int>next(n);
    next[0]= -1;
    int temp = 0;
    for(int i=0; i<=n; i++){
        if((v[i]>v[i+1]) && v[i]>temp){
            temp = v[i];
        }
        next[i]=temp;
    }
    display(next);
}

void  previous_greatest(vector<int>&v){
    int m  = v.size();
    vector<int>previous(m);
    previous[0]= -1;
    int temp;
    for(int i=m-1; i>=0; i--){
        if((v[i-1]<v[i]) && v[i-1]<temp){
            temp = v[i];
        }
        previous[i]=temp;
    }
    display(previous);
    
}



int main(){
    vector<int>v ={0,0,1,1,0,0,1,2,2,1,0,0,1,0,1,2,3,3,0,0,1,2,3,0,1,4,0,2,2,0,2};
    
    previous_greatest(v);
    cout<<endl<<endl;
    next_greatest(v);
    
}