#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x , n ;
    cout<<"Enter target : ";
    cin>>x ;
    cout<<endl;
    vector<int> v;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<endl;
    cout<<"Enter elements of array : ";
    
    for (int i = 0 ; i<=n-1 ; i++){         //to take vector input
        int q ;
        cin>>q;
        v.push_back(q);

    }
    
    cout<<endl;
    cout<<"elements consider as i are\n";
    for(int i = 0 ; i<=v.size() ; i++){
        cout<<"i"<<i<<" = "<<v[i]<<endl;
    }
    cout<<endl;
    cout<<"elements consider as j  are\n";
    for(int j = 1 ; j<=v.size() ; j++){
        cout<<"j="<<j<<" = "<<v[j]<<endl;
    }
    
    cout<<endl;
    cout<<"doublet of i and j which is equals to given target number x : \n";
    for(int i = 0 ; i<=v.size()-2; i++){
        for(int j = i+1 ; j<=v.size()-1 ; j++){
            if(v[i]+v[j]==x){
                cout<<"i="<<i<<"  "<<"j="<<j<<endl;
            }
        }
    }



}