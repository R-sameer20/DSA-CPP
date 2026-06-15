#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string str = "AaBbCcDdeeee";
    // cin>>str;
    int n = str.size();
    vector <int> v(26,0);
   
    for(int i = 0 ; i<n ; i++){
        if((int)str[i]>=65 && (int)str[i]<=90 ){
            str[i] = char((int)str[i]+32);
        }
        v[97 -(int)str[i] ]++;
    }
    // int Fmax = INT16_MIN;
    
    // for(int i = 0 ; i<n ; i++){
    //     if(Fmax<v[i]){
    //         Fmax=v[i];                      
    //     }
    // }
    // int Smax = INT16_MIN;
    // for(int i = 0 ; i<n ; i++){
    //     if(Fmax!=v[i] && Smax<v[i] ){
    //         Smax=v[i];
    //     }
    // }
    string temp = str;
    sort(temp.begin() , temp.end());
    int ascii = 0;
    int i = 0;
    int count = 1;
    int Rmax = INT16_MIN;
    for(int i = 1 ; i<n ; i++){
        if(temp[i]!=temp[i-1]){
            Rmax = max(count , Rmax);
            ascii = int(temp[i]);
            break;
        }
        count++;
    }
    
    for(int i = 0 ; i< n ; i++){
        if(int(str[i]) == ascii){
            str[i] = temp[0];
            count++;
            if(count == 2) break;
        }
    }
    cout<<str;




}