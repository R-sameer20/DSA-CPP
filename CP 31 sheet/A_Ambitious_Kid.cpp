#include<iostream>
#include<queue>

using namespace std;
int minOperation(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    priority_queue<int>maxNeg;
    priority_queue<int , vector<int> , greater<int> >minPos ;
    for(int i = 0 ; i<n ; i++){
        if(arr[i] == 0 ){
            return 0;
        }
        else if(arr[i] < 0){
            maxNeg.push(arr[i]);
            // if(maxNeg.size() > 1){
            //      maxNeg.pop();
            // }
        }
        else{
            minPos.push(arr[i]);
            // if(minPos.size() > 1){
            //      minPos.pop();
            // }
        }
    }
    // if(maxNeg.empty()) return abs(minPos.top());
    // if(minPos.empty()) return abs(maxNeg.top());
    int ans = min(abs(maxNeg.top()) , abs(minPos.top()));
    return ans;


}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<minOperation()<<"\n";
    }
    return 0;
}