#include<iostream>
#include<vector>
using namespace std;
bool palindrome(string str , int i , int j){
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]) return false;
    else palindrome(str,i++,j--);
}
int main(){
    string str = "sameer";
    cout<<palindrome(str,0,str.length()-1);
}