// //69 leet code;
// //type cast to long long to mid and x
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
//     int n = 21;
//     int x = 16;
//     int low = 0;
//     int high = n;
//     int mid = 0;
//     while(low<=high){
//         mid=low + (high-low)/2;
//        if(mid*mid==x){
//         cout<<"square root of x is "<<mid;
//        }
//        else if((mid*mid)<x){
//         low = mid+1;
//        }
//        else{
//         high = mid - 1;
//        }
        
//     }
   
//     cout<<high;
// }