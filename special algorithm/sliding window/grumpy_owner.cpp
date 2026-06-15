#include<iostream>
#include<vector>
using namespace std;
int main(){
    int customer [] = {1,0,1,2,1,1,7,5};
    int grumpy [] = {0,1,0,1,0,1,0,1};
    int n = sizeof(customer)/sizeof(customer[0]);
    int k = 3;
    int max_los = 0;
    int preLoss = 0;
    int maxIdx = 0;
    for(int i = 0  ; i<k ; i++){
        if(grumpy[i]==1){
           preLoss+=customer[i];
        }    
    }
    max_los = preLoss;
    int i = 1 ; 
    int j = k;
    while(j<n){
        int currLos = preLoss;
        if(grumpy[j]==1) currLos +=customer[j]; 
        if(grumpy[i-1]==1) currLos -=customer[i-1];
        if(currLos>max_los){
                max_los = currLos;
                maxIdx = i;
            }
        preLoss = currLos;
        i++;
        j++;

    }
    cout<<max_los<<" "<<maxIdx;
    cout<<endl;
    for(int i = maxIdx ; i<maxIdx+k ; i++){
        grumpy[i]=0;
    }
    int sati = 0;
    for(int i = 0 ; i<n ; i++){
        if(grumpy[i]==0) sati+=customer[i];
         
    }
    cout<<sati;
    //my code 
    // int satisfaction = 0;
    // int max_customer = 0;
    // int maxIdx = -1; 
    // int i = 1;
    // int j = k;
    // int sum = 0;
    // for(int i = 0 ; i<k ; i++){
    //     sum+=customer[i];
    // }
    // max_customer = sum;
    // while(j<n){
    //     sum = (sum + customer[j] - customer[i-1]);
    //     if(sum>max_customer){
    //         max_customer=sum;
    //         maxIdx=i;
    //     }
    //     i++;
    //     j++;
    // }
    // for(int i = maxIdx ; i<k ; i++){
    //     grumpy[i]=0;
    // }
    // for(int i = 0 ; i<n ; i++){
    //     if(grumpy[i]==0){
    //        satisfaction+=customer[i]; 
    //     }
    // }
    // cout<<satisfaction;

}