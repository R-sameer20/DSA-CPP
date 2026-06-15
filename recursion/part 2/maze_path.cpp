#include<iostream>
#include<string>
using namespace std;
// int maze(int sr, int sc , int er , int ec){
//    if(sr>er || sc>ec){
//     return 0;
//    }
//    if(sr==er && sc==ec){
//     return 1;
//    }
//    else{
//     int rightway = maze(sr,sc+1,er,ec);
//     int downtway = maze(sr+1,sc,er,ec);
//     int totalway = rightway+downtway;
//     return totalway;
//    }
// }

int maze2(int row , int col){
   if(row<1 || col<1){
    return 0;
   }
   if(row==1 && col==1){
    return 1;
   }
   else{
    int rightway = maze2(row,col-1);
    int downtway = maze2(row-1,col);
    int totalway = rightway+downtway;
    return totalway;
   }
}

void printpath2(int row , int col ,string s){
if(row<1 || col<1){
    return ;
   }
   if(row==1 && col==1){
     cout<<s<<endl;
       return ;
   }
   else{
   printpath2(row,col-1,s+'R');
   printpath2(row-1,col,s+'D');
   
   }
}


// void printpath(int sr, int sc , int er , int ec,string s){
//  if(sr>er || sc>ec){
//     return ;
//    }
//    if(sr==er && sc==ec){
//       cout<<s<<endl;
//       return ;
//    }
//    else{
//     printpath(sr,sc+1,er,ec,s+'R');
//     printpath(sr+1,sc,er,ec,s+'D');
   
//    }
// }
int main(){
int a , b;
cout<<"Enter rows and colums of matrix :";
cout<<"\nrows : ";
cin>>a;
cout<<"\ncolums : ";
cin>>b;
//int ways = maze(1,1,a,b);
//cout<<"\nnumber of ways to cover distance in maze : "<<ways;


int ways2 = maze2(a,b);
cout<<"\nnumber of ways to cover distance in maze : "<<ways2;

// cout<<endl;
// printpath(1,1,a,b,"");

cout<<endl;
printpath2(a,b,"");

}