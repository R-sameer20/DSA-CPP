#include<iostream>
#include<vector>
using namespace std;
int main(){
   
    int n;
    cout<<endl<<"Enter number of students :";
    cin>>n;
    int arr[n];
    arr[0]=36;     //because roll number dosent exist
    cout<<endl<<"Enter marks of student :";
    for(int i = 1 ; i<=n-1 ; i++){
        cin>>arr[i];
    }
    cout<<endl<<"Your entered marks :";
    for(int i = 1 ; i<=n-1 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0 ; i<=n-1 ; i++){
        if(arr[i]<35){
            cout<<i<<" "<<"roll no is FAIL"<<endl;
        }
    }
    


}