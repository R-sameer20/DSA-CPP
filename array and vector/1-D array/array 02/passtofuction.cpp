#include<iostream>
using namespace std;
void display(int a[]){
    for(int i = 0 ; i<=9 ; i++){
        cout<<a[i]<<" ";
        
    }
    cout<<endl;

}

void change(int a[]){
    a[0]=-8;
    a[1]=-9;
}


int main(){
    int arr[10]={1,2,5,8,-9,-4,-2,0,10};
    cout<<"Original array : ";
    display(arr);               //array always pass by reference
    change(arr);
    cout<<"Channged array :";
    display(arr);
}