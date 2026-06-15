#include<iostream>
using namespace std;
void pip(int n){
    if(n==0){
        return ;
    }
    else{
        cout<<"Pre "<<n<<endl;
        pip(n-1);
        cout<<"In "<<n<<endl;
        pip(n-1);
        cout<<"Post "<<n<<endl;
        pip(n-1);}
}
int main(){
    cout<<endl;
    pip(2);
    cout<<endl;
}