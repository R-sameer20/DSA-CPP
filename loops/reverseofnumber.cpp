#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int last_digit=0;
    int remender=0;
    while(n>0){
        remender*=10;
        last_digit=n%10;
        remender+=last_digit;
        n/=10;
    }
    cout<<"reverse of number is ; "<<"  "<<remender;
    



}
// first of all reverse is 0 then last digit obtained form modulos operator 
//then last difit get added to reverse which is initially 0
//then further original number get divided by 10 reduved by tens unit
//again remender get multiply by 10


//methof to fing last digit is modlo oprator/
//reducing a number by tens is n/=10