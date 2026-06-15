#include<iostream>
#include<vector>
using namespace std ; 
void change(int arr[3][3]){
    arr[0][0]=100;
}

int main(){
    int arr[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
    cout<<arr[0][0]<<endl;
    change(arr);
    cout<<arr[0][0]<<endl;


}