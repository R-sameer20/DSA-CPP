#include<iostream>
#include<string>
using namespace std;
int main(){
    int n = 7; //0111
    int m = 8; //1000
    int k = n>>1; //0011
    int l = n<<1; //1110
    cout<<k<<endl;
    cout<<l<<endl;
    cout<<(n & m )<<endl;
    cout<<( n | m )<<endl;
    cout<< (n ^ m) <<endl;
}