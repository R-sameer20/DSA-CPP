//minimum capacity use all days error in code
#include<iostream>
#include<vector>
#include<limits>
using namespace std;
bool check(int mid , int day , vector<int> &weight){
    int n=weight.size();
    int m = mid;
    int count = 1;
    for(int i = 0 ; i<n ; i++){
        if(m>=weight[i]){
            m=m-weight[i];
        }
        else{
            count++;
            m=mid;
            m=m-weight[i];
        }
        if(count>day){
            return false;
        }
        else{
            return true;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the number of package you want to carry :";
    cin>>n;
    cout<<"\nEnter the weight of each package : \n";
    vector<int> v;
    for(int i = 0 ; i<n ; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int day;
    cout<<"\nEnter the dasy you have : ";
    cin>>day;
    int si = v.size();
    int max = INT16_MIN;
    int sum = 0;
    cout<<"\nFollowing are the weights : \n";
      for(int i = 0 ; i<si ; i++){
        cout<<v[i]<<" ";
        if(max<v[i]){
            max=v[i];
        }
        sum+=v[i];
    }
    int low = max;
    int hi = sum;
    // cout<<endl<<low<<endl<<hi;
    int mincapacity=sum;
    int mid=0;
    while(low<=hi){
        mid = low + (hi-low)/2;
        if(check(mid,day,v)==true){
            mincapacity=mid;
            hi=mid-1;
        }
        else{
            low=mid+1;
        }
      
        
    }
    cout<<"\nMinium capacity a ship can contain : "<<mincapacity;
}
