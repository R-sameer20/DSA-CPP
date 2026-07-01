#include<iostream>
using namespace std;
int sumOfEff(){
    int n;
    cin>>n;

    int arr[n-1];
    int sum = 0;
    for(int i = 0 ; i<n-1 ; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    return (-1*sum);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<sumOfEff()<<"\n";
    }
    return 0;
}