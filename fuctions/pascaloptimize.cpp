#include<iostream>
using namespace std;
int main(){
    int n=5;
    // cout<<"enter number of rows :";
    
    for(int i=1 ; i<=n ; i++){
        int curr=1;
        for(int j=1 ; j<=i ; j++){
            cout<<curr;
            curr*=((i-j)/(j+i));
        }
        cout<<endl;
    }
}

//problem