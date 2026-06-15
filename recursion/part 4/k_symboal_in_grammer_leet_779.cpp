#include<iostream>
#include<string>
#include<vector>
using namespace std;
int k_term(int n,int k){
    if(n==1) return 0;
    if(k%2==0){ //flip condition , k/2 of previous fliped
        int precious_ans =  k_term(n-1,k/2);
        if(precious_ans==0) return 1;
        else return 0;
    }

    if(k%2!=0){ //no flip , and k/2+1 term of previous
        int precious_ans =  k_term(n-1, k/2+1);
    }
}
int main(){
    int n = 5;
    int k = 10;
    cout<<k_term(n,k);
}