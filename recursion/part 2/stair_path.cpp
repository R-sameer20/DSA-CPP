#include<iostream>
using namespace std;
int stair(int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
      if(n==3){
        return 3 ;
    }
    else{
        int ans = stair(n-1) + stair(n-2) + stair(n-3);
        return ans;
    }
}



int main(){
int n ;
cout<<"Enter number of steps : ";
cin>>n;
int ways = stair(n);
cout<<"\nNomber of ways is : "<<ways;
}

// int stair(int n , int a , int b){
//     if(n==a){
//         return a;
//     }
//     if(n==b){
//         return b;
//     }
//     else{
//         int ans = stair(n-1) + stair(n-2);
//         return ans;
//     }
// }



// int main(){
// int n ;
// cout<<"Enter number of steps : ";
// cin>>n;
// int a , b;
// cout<<"Enter how many steps you can climb at a time : \n";
// cout<<"option 1 :";
// cin>>a;
// cout<<"\noption 2 :";
// cin>>b;
// int ways = stair(n);
// cout<<"\nNomber of ways is : "<<ways;
// }