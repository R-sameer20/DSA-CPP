#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int arr[]={-7,-5,-1,0,2,5,8,9,10,12,16};
    int n=11;
    int x , k;
    cout<<"Enter the target :";
    cin>>x;
    cout<<"\nEnter the number of elements you want :";
    cin>>k;
    vector<int>ans(k);
    if(x<arr[0]){
        cout<<"\nthe elements are : ";
        for(int i = 0 ; i<k ; i++){
            ans[i]=arr[i];
            cout<<ans[i]<<" ";
        }
        return 0;
    }
    if(x>arr[n-1]){
        cout<<"\nthe elements are : ";
        int i = n-1;
        int j = k-1;
        while(k>=0){
        ans[k]=arr[i];
        k--;
        i--;
       }
    }
    int low = 0 ;
    int t = 0;
    int high = n-1;
    int mid = -1;
    bool flag = false;
    while(low<=high){
        mid = low + (high-low)/2;
        // flag = true;
        if(arr[mid]==x){
            flag = true ;
            ans[t]=arr[mid];
            t++;
            break;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
    int lb = high;
    int ub = low;

    if(flag==true){
        lb = mid - 1;
        ub = mid+1;
    }

    while(t<k && lb>=0 && ub<=n-1){
        int d1 = abs(x-arr[lb]);
        int d2 = abs(x-arr[ub]);
        if(d1<=d2){
            ans[t]=arr[lb];
            lb--;
        }
        else{
            arr[t]=arr[ub];
            ub++;
        }
        t++;
    }
    if(lb<0){
        while(t<k){
            ans[t]=arr[ub];
            ub++;
            t++;

        }
    }
    if(ub>n-1){
        while(t<k){
            ans[t]=arr[lb];
            lb--;
            t++;
        }
    }
    sort(ans.begin(),ans.end());
    cout<<endl<<endl;
    for(int i = 0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";

    }

}