#include<iostream>
#include<string>
using namespace std;
int main(){
    string test = "aaabhdmsbabbbbsbassyauyrttttbafr";
    int n = test.size();
    cout<<endl<<"size of array : "<<n;
    int count = 0;
    int i = 0;
    if(n==1){
        cout<<"number of different nebhouring character = "<<0;
    }
    else if (n==2)
    {
        if(test[i]==test[i+1]){
            cout<<endl<<"0";
        }
        else{
            cout<<"1";
        } 
    }
    else{
        for(int i = 1 ; i<n ; i++){
            if(test[i]!=test[i-1] && test[i]!=test[i+1]){
                count++;
            }
        }
        cout<<endl<<count;
    }
}
