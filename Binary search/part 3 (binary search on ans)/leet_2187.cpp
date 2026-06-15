//find minimum hours requred to complet number of trips (perfect code)
#include<iostream>
#include<vector>
#include<limits>
using namespace std;
bool check(vector<int>& time , long long mid , long long totaltime){
    long long trip = 0;
    int n = time.size();
    for(int i = 0 ; i<n ; i++){
        trip+=mid/(long long)time[i];
    }
    if(trip<totaltime){
        return false ;
    }
    else{
        return true;
    }
}
int main(){
    long long n;
    cout<<"Enter number of buses you have : ";
    cin>>n;
    vector<int> time;
    cout<<"\nEnter the time requred to each bus to complet one trip : \n";
    for(int i = 0 ; i<n ; i++){
        int temp ;
        cin>>temp;
        time.push_back(temp);
    }
    int si = time.size();
    long long mx = -1;
    cout<<"\nYou Entered : \n";
    for(int i = 0 ; i<si ; i++){
        cout<<time[i]<<" ";
        mx=max(mx,(long long )time[i]);
    }
    long long totaltrip;
    cout<<"\nEnter the total number of trips you required : ";
    cin>>totaltrip;
    long long lo = 1;
    long long hi = mx *totaltrip;
    long long ans = -1;
    while(lo<=hi){
        long long mid = lo + (hi - lo )/2;
        if(check(time , mid , totaltrip)==true){
             ans = mid;
             hi = mid - 1;
        }
        else{
            lo = mid + 1;
        }
    }
    cout<<"Total time requried for given trips is "<<ans;
    
}