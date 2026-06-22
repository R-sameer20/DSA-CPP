#include<iostream>
using namespace std;

class maxHeap{
public:
    int arr[50];
    int idx ;

    maxHeap(){
        idx = 1;
    }
    int top(){
        return arr[1];

    }

    void push(int x){
        arr[idx] = x;
        int i = idx;
        idx++;
        while(i!=1){
            // swap arr[i] with parent i/2;
            int parent = i/2 ;
            if(arr[i] > arr[parent] ){
                // swap
                swap(arr[i] , arr[parent]);
                
            }
            else break ;
            i = parent;
        }
    }

    void pop(){
        idx--;
        int i = 1;
        arr[1] = arr[idx];

        while (true){
            int left = 2*i;
            int right = (2*i) + 1 ;
            
            if(left > idx) break;
            if(right > idx){
                if(arr[i] < arr[left]){
                    swap(arr[i] , arr[left]);
                    i = left;
                }
                else break;
            }

            if((arr[left] > arr[right] )   ){
                if(arr[i] < arr[left]){
                    swap(arr[i] , arr[left]);
                    i = left;
                }
                else break;

            }
            else{
                if(arr[i] < arr[right]){
                    swap(arr[i] , arr[right]);
                    i = right;
                }
                else break;
            }
        }
        
        
    }

    int size(){ 
        return idx - 1;
    }

    void display(){
        cout<<endl;
        for(int i = 1 ; i<=idx - 1 ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    maxHeap pq ;

    pq.push(100);
    pq.push(200);
    pq.push(300);
    pq.push(400);
    pq.push(120);
    pq.push(40);
    pq.push(70);
    pq.display();

    cout<<pq.size();
    pq.pop();


    pq.display();

}