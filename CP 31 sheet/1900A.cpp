#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        str.resize(n);
        for(int i = 0 ; i<n ; i++){
            cin>>str[i];
        }
        if(str.size()>=3){
            cout<<1;
        }

        int i = 1;
        int count = 0;
        int countOfDot = 0;
        int needToFill = 0;
        while(i<n-1){
            if(str[i] == '.'){
                i++;
                countOfDot++;
            }
            else{
                if(countOfDot == 1) needToFill+=1;
                else if(countOfDot == 2 || countOfDot == 3) needToFill+=2;
                else needToFill = needToFill + (needToFill + 1) / 2;

            }
          
        }
        cout<<needToFill<<endl;
        
        
    }
}