#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
 

        int n;
        cin>>n;
        if(n == 0) {
            cout<<0<<"\n";
            return 0;
        }
        vector<int> arr(n);
        for(int i = 0 ; i<n ; i++){
            cin>>arr[i];
        }
        priority_queue<int> neg;
        priority_queue<int  , vector<int> , greater<int>> pos;
        for(int i = 0 ; i<n ; i++){
            if(arr[i] == 0){
                cout<<0<<"\n";
                return 0;
            }
            else if(arr[i] > 0){
                pos.push(arr[i]);
            }
            else{
                neg.push(arr[i]);
            }

        }

        if(pos.size() == 0 && neg.size() == 0){

            cout<<0<<"\n";

            

        }

        else if(pos.size() == 0 ){

            cout<<abs(neg.top())<<"\n";

            

        }

        else if(neg.size() == 0 ){

            cout<<pos.top()<<"\n";

           

        }

        else{

            int a = pos.top();

            int b = abs(neg.top());

            cout<<min(a,b)<<"\n";
        }
           

       



   

    
}