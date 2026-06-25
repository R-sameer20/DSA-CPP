//koko eating banana error in code
#include<iostream>
#include<vector>
#include<limits>
using namespace std;
bool check(vector<int>& pile, int mid , int h){
    int count = 0;
    int n = pile.size();
    for(int i = 0 ; i<n ; i++){
        if(h>=pile[i]){
            count++;
        }
        else if(h%pile[i]==0){
            count+=((h/pile[i])+1);
        }
        else{
            count+=((h/pile[i]))+1;
        }
    }

    if(count>h){
        return false;
    }
    else{
        return true;
    }
}
int main(){
    int n;
    cout<<"Enter the number of piles : ";
    cin>>n;
    vector<int> pile;
    cout<<"\nEnter the size of each pile for "<<n<<" piles :\n";
    for(int i = 0 ; i<n ; i++){
        int temp;
        cin>>temp;
        pile.push_back(temp);
    }
    int low = 1;
    int hi = 0;
    cout<<"\nYou entered piles are : \n";
    for(int i=0 ; i<n ; i++){
    cout<<pile[i]<<" ";
      hi=max(hi,pile[i]);
    }
    int h;
    cout<<"\nEnter number of hour you have : ";
    cin>>h;
   
    int minspeed=0;
    while(low<=hi){
        int mid = low + (hi- low)/2;
        for(int i=0 ; i<n ; i++){
            if(check(pile,mid,h)){
                minspeed = mid;
                hi = mid-1;
            }
            else{
                low = mid+1;
            }
        }
    }
    cout<<"\nMin Speed is "<<minspeed;
}