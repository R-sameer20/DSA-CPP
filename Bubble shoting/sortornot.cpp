#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[7]={7,1,2,3,4,5,6};
    int count = 0 ;
    int n = 7;
    for(int i = 0 ;i<n-1 ; i++){
        count++;
    }
    if(count>0){
        cout<<"\nNot sorted\n";
            for(int i = 0 ;i<n-1 ; i++){
             cout<<arr[i]<<" ";
            }
    }
    else{
        cout<<"Not sorted :";
    }

}