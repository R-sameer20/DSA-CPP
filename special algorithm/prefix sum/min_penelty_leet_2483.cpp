#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string coustemer = "YYNYNNNYY";
    int n = coustemer.length();
    int pre [n+1];
    int suf [n+1];
    pre[0]=0;
    for(int i = 0 ; i<=n ; i++){
        pre[i+1] = pre[i] + (coustemer[i]=='N' ? 1 : 0);
    }
    suf[n]= 0;
    for(int i = n-1 ; i>=0 ; i--){
        suf[i]=suf[i+1] + (coustemer[i]=='Y' ? 1 : 0);
    }
    int min_penelty = n;
    for(int i = 0 ; i<=n ; i++){
        pre[i]+=suf[i];
        int pen = pre[i];
        min_penelty = min(min_penelty , pen);
    }

    for(int i = 0 ; i<=n ; i++){
        int pen = pre[i];
        if(pen == min_penelty){
            cout<<i;
            return i;
        }
    }
    return 0;
    
    // int openPenellty[n];
    // int closePenellty[n];
    // if(time[n-1]=='Y') openPenellty[n-1]==0;
    // else { 
    //     penelty++;
    //     openPenellty[n-1]=penelty;
        
    // }
   
    // for(int i = n-2 ; i>=n ; i--){
    //     if(time[i]=='Y'){
    //         openPenellty[i]=penelty;
    //     }
    //     else{
    //         penelty++;
    //         openPenellty[i]=penelty;

    //     }
    // }
    // penelty=0;
    // if(time[0]=='Y'){
    //     penelty++;
    //     closePenellty[0]=penelty;
    // }
    // else { 
    //     closePenellty[0]=0;
    // }

    // for(int i = 1 ; i<n ; i++){
    //     if(time[i]=='Y'){
    //         penelty++;
    //          closePenellty[0]=penelty;

    //     }
    //     else { 
    //     closePenellty[0]=0;
    //     }
    // }

    // int ans[n];



}