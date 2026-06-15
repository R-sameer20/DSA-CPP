#include<iostream>
#include<limits>
using namespace std;
int main(){
    int n;
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

    int max=INT16_MIN; //initializing with minimum value insted of first element of array
    
    for(int i = 0 ; i <=n-1 ; i++){
        if(max<arr[i]){
            max=arr[i];         //for first ittration max get value of first element of array
                                //then the code run further and check the values                     
        }
    }
    int smax = INT16_MIN;
    for(int i = 0 ; i<=n-1 ; i++){
        if(max!=arr[i] && smax<arr[i] ){
            smax=arr[i];
        }
    }

    cout<<"\ngreatest element = "<<max;
    cout<<" \n second greatest element = "<<smax;
}