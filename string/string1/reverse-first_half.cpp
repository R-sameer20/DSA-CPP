#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "where are you going , i am waiting for you";
    int n = str.size();
    cout<<n<<endl;
    reverse(str.begin()+(n/2),str.end());
    cout<<str;

    reverse(str.begin()+1 , str.begin()+10);
    cout<<endl<<str;
    
}
