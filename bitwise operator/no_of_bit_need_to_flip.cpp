#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int x = 23 ;
    int y = 31 ;
    int k = (x^y);
    cout<<__builtin_popcount(k);
    int count = 0;
    while(k>0){
        k = (k & (k-1));
        count++;
    }
    cout<<endl<<count;
}