#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(2);
    pq.push(81);
    pq.push(8);
    cout<<pq.top()<<endl;

    pq.pop();

    cout<<pq.top()<<endl;

    priority_queue< int , vector<int> , greater<int> > pr;
    pr.push(10);
    pr.push(-88);
    pr.push(-8);
    pr.push(8);
    cout<<pr.top()<<endl;

    pr.pop();

    cout<<pr.top()<<endl;

}