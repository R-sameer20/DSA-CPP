#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
bool perfect(int n ){
    int root = sqrt(n);
    if(root*root){
        return true;
    }
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int x = 0;
    int y = n;
    int check = 0 ;
    while(x<=y){
        if(perfect(x) && perfect(y)){
            // return true;
            check = 1;
            break;
        }
        else if(perfect(y)){
        y = (int)sqrt(y)*(int)sqrt(y);
        x=n-y;
        }

        else{
        x =((int)sqrt(x)+1)*((int)sqrt(x)+1);
        y=n-x;   
        }
    }
    if(check == 1){
        cout<<"\nyes";
    }
    else{
        cout<<"\nno";
    }
}