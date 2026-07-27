#include<iostream>
using namespace std;
int main(){
    int t ; 
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long k = n;
        bool flag = false;
        int count3=0 , count2 = 0 , count = 0;
        while(n>1){
            if(n%2 == 0){
                n/=2;
                count2++;
            }
            else if(n%3 == 0){
                n/=3;
                count3++;
            }
            else break;
        }
        if(n>1 || count2 > count3){
            cout<<-1<<"\n";
            continue;
        }
        else{
            cout<<(count3 - count2) + count3<<"\n";
        }
       
       
    }
    return 0;

}