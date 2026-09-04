#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;

        //the closing bracket which dont have the clossing bracket move the back 
        // or reduce o count 
        int o = 0 , c = 0 , move = 0;

        for(int i = 0 ; i<n ; i++){
            if(str[i] == ')'){
                if(o>0) o--;
                else move++;
            }
            else o++;
        }

        cout<<move<<"\n";

    }
    return 0;
}