#include<iostream>    //WRONG CODE
#include<limits>                                                                                                                                                                                                                                                              
using namespace std;
int mani(){
    int n;
    int max=INT16_MIN;
    cout<<endl<<"Enter number of elements :";
    cin>>n;
    int arr[n];
   
    cout<<endl<<"Enter elements of array :";
    for(int i = 0 ; i<=n-1 ; i++){
        cin>>arr[i];
    }
    cout<<endl<<"Your entered elements :";
    for(int i = 0 ; i<=n-1 ; i++){
        cout<<arr[i]<<" ";
    }

    for(int i=0 ; i<=n-i ; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"\nMax number among input is : "<<max;
}