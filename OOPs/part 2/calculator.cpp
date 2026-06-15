#include<iostream>
using namespace std;
class calculator{
    public:
    int a;
    int b;
    
    void add(){
        cout<<a+b<<endl;
    }
    void subtrect(){
        cout<<abs(a-b)<<endl;
    }
    void multiply(){
        cout<<a*b<<endl;
    }
    void division(){
        cout<<float(a/b)<<endl;
    }
};
int main(){
    calculator calci;
    calci.a = 10;
    calci.b = 52;

    calci.add();
    calci.subtrect();
    calci.multiply();
    calci.division();

}