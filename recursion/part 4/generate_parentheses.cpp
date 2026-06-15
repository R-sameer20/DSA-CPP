#include<iostream>
#include<vector>
using namespace std;
// void parentheses(string str , int n){
//     if(str.size()==(2*n)){
//         for(int i = 0 ; i<str.size() ; i++){
//         cout<<str<<" ";
//         cout<<endl;
//         }
//         return ;
//     }
//     char left = '(';
//     char right = ')';
//     if(str==""){
//         parentheses(str+left,n);
//     }
//     else if(str[str.length()-1]==left){
//         parentheses(str+right,n);
//         parentheses(str+left,n);
//     }
//     else if(str[str.length()-1]==right){
//         parentheses(str+left,n);
//         parentheses(str+right,n);
//     }

// }

// void parentheses(string str , int n , int st , int end , char left , char right ){
//        if(str.size()==(2*n)){
//         for(int i = 0 ; i<str.size() ; i++){
//         cout<<str<<" ";
//         cout<<endl;
//         }
//         return ;
//     }

//         if(str==""){
//             parentheses(str+left,n,st-1,end,left,right);
//     }
//         else if(str[str.length()-1]==left){
//             if(st>n){
//             parentheses(str+left,n,st-1,end,left,right);
//         }
//             else parentheses(str+right,n,st,end-1,left,right);      
//     }
//      else if(str[str.length()-1]==right){
//             if(end>n){
//             parentheses(str+right,n,st,end-1,left,right);
//         }
//             else parentheses(str+left,n,st-1,end,left,right);      
//     }
//     // else if(str[str.length()-1]==right){
//     //     parentheses(str+left,n);
//     //     parentheses(str+right,n);
//     // }

// }

void parentheses(string str , int open , int close , int n ){
    if(close==n){
        cout<<str<<endl;;
        return ;
    }
    if(open<n) parentheses(str+'(' , open+1 ,close , n);
    if(close<open) parentheses(str+')' , open ,close+1 , n);
}


int main(){
    int n = 2;
    // char left ='(';
    // char right = ')';
    //parentheses("",n,n,n,left,right);
    parentheses("", 0 , 0 , n);
}