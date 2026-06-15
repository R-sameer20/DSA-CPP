#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//in build
// int count_set_bits(int n){
//     return __builtin_popcount(n);
// }
int count_set_bits(int n){
    int count = 0;
    while(n>0){
        n = (n & (n-1));
        count++;
    }
    return count ;
}
int main(){
    int n = 8;
    cout<<count_set_bits(n);
    // cout<<count_set_bits(n);
}