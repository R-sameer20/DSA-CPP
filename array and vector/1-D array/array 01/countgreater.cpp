#include<iostream>
#include<limits>
using namespace std;
int main(){
    int n;
    int check;
    int count=0;
    cout<<endl<<"Enter number of elements :";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter elements of array :\n";
    for(int i = 0 ; i<=n-1 ; i++){
        cin>>arr[i];
    }
    cout<<endl<<"Your entered elements :";
    for(int i = 0 ; i<=n-1 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n\nEnter the number you want to check :";
    cin>>check;
    for(int i = 0 ; i<=n-1 ; i++){
        if(arr[i]>check){
            count++;
        }
    }
    cout<<"\nElements in array greater than given number is  "<< count;
}