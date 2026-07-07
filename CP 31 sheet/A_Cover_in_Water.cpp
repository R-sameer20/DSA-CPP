#include<iostream>
#include<string>
#include<climits> // Needed for INT_MIN
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        
        int dotCount = 0;
        for(int i = 0 ; i<n ; i++){
            if(str[i] == '.') dotCount++;
        }
        
        int continuousDot = 0;
        int maxContinuous = INT_MIN; 
        
        for(int i = 0 ; i<n ; i++){
            if(str[i] == '.'){
                continuousDot++;
                if(continuousDot > maxContinuous){
                    maxContinuous = continuousDot;
                }
            } 
            else {
                continuousDot = 0; 
            }
        }
        
       
        if(maxContinuous >= 3){
            cout << 2 << "\n";
        } 
        else {
            cout << dotCount << "\n";
        }
    }
    return 0;
}