#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string test = "aaabhdmsbabbbbsbassyauyrttttbafr";
    int n = test.size();
    cout<<endl<<"size of array : "<<n;
    cout<<endl<<test;
    sort(test.begin(),test.end());
    cout<<endl<<test;
   
}
