#include<iostream>
using namespace std;

void display(int* a , int size ){           // address of first element of array send
    for(int i = 0 ; i<=size ; i++){         //can excess whole array
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
void change(int* a , int size){
    a[0]=-8;
    a[1]=-9;
}

int main(){
    int arr[10]={1,2,5,8,-9,-4,-2,0,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nSize of array = "<<size<<endl;
    cout<<"\nGiven array : ";
    display(arr,size);
    change(arr,size);
    cout<<"\nChanged array : ";
    display(arr,size);
} 
