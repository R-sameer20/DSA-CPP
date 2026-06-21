#include <iostream>
#include<queue>
using namespace std;
int main(){
    int arr[] = {2,1,4,5,8,9,6,3,2,4,5,7,8,9,65,4,8,5,2,3};
    priority_queue< int , vector<int> , greater<int> > pq;
    for(int x : arr){
        pq.push(x);
    }
    int mincost = 0;
    while(pq.size() > 1){
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();

        pq.push(x+y);
        mincost += (x+y);
        
    }

    cout<<mincost;
}