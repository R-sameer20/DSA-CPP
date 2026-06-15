#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter a numbe that's table you want :";
    cin>>n;
    for(int i=n ; i<= n*10 ; i+=n){
        cout<<i<<endl;
    }
}