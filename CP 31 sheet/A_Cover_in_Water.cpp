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
        str.reserve(n);
        for(int i = 0 ; i<n ; i++){
            cin>>str[i];
        }
        int i = 0;
        int countOfDot = 0;
        int needToFill = 0;
        while(i < n-1){
            if(str[i] == '.'){
                countOfDot++;
            }
            else{
                if( countOfDot==0) continue;
                else{       
                    if(countOfDot == 1)  needToFill+=1;
                    else if( countOfDot == 3 || countOfDot == 2 ) needToFill+=2;
                    else{
                        if(countOfDot%2 == 0) needToFill  += (countOfDot/2) + 1;
                        else needToFill  += (countOfDot + 1) / 2;                              
                    }
                
                }
                countOfDot = 0;

            }
            i++;
          
        }
        if( countOfDot!=0){
            if(countOfDot == 1)  needToFill+=1;
            else if( countOfDot == 3 || countOfDot == 2 ) needToFill+=2;
            else{
                if(countOfDot %2 == 0) needToFill  += (countOfDot/2) + 1;
                else needToFill  += (countOfDot + 1) / 2;                              
            }
        countOfDot = 0;
            
        }
        cout<<needToFill<<endl;
        
        
    }
}