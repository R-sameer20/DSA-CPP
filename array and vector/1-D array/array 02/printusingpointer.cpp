#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,5,8,-9,-4,-2,0,10,88,-66,-874};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nSize of array (n-1) = "<<size<<endl;
    int* ptr = &arr[0];
    cout<<"\nPrinting using ptr : ";
    for(int i = 0 ; i<=size ; i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;

    cout<<"\nPrinting using *ptr : ";
        for(int i = 0 ; i<=size ; i++){
        cout<< *ptr <<" ";
        ptr++;
    }
    cout<<endl;

    *ptr=-10;
    ptr++;
    *ptr=-32;
    ptr++;
    *ptr=-789;
   

    cout<<"\nPrinting using *ptr  : ";
    for(int i = 0 ; i<=size ; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
} 
