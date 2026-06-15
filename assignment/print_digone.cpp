#include<iostream>
using namespace std;
int main(){
    int arr[][4]={1,2,3,4,5,6,7,8,9,4,2,3,9,8,7,5};
    int n = 3;
    int i = 0 , j = n ;
    while(i<=n && j>=0){
       cout<<arr[i][i]<<" ";
       if(i==j){
            i++;
            j--;
        continue;
       }
       else cout<<arr[i][j]<<" ";
       i++;
       j--;
    }
}