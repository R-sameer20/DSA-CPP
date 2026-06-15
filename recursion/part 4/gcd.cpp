#include<iostream>
#include<vector>
using namespace std;
//TC is O(min(a,b))
// int hcf(int a , int b){
//     for(int i = min(a,b) ; i>=2 ;i--){
//         if(a%i==0 && b%i==0){
//             return i;
//         }
//     }
//     return 0 ;
// }

int R_hcf(int a , int  b){
    if(a==0){
        return b; 
    }
    // int r = b%a;
    // R_hcf(r,a);
    R_hcf((b%a),a);
}

int main(){
    int a = 24;
    int b = 60;
    //cout<<hcf(a,b);
    cout<<R_hcf(a,b);
    
}