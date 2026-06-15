#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>greed;
    greed.push_back(0);
    greed.push_back(5);
    greed.push_back(88);
    greed.push_back(2225);
    greed.push_back(963);
    greed.push_back(96);
    greed.push_back(23);
    greed.push_back(85);
    greed.push_back(1);
    greed.push_back(100);
    greed.push_back(895);
    greed.push_back(55);
    vector<int>cooki;
    cooki.push_back(554);
    cooki.push_back(66);
    cooki.push_back(36);
    cooki.push_back(589);
    cooki.push_back(2563);
    cooki.push_back(15);
    cooki.push_back(89);
    cooki.push_back(475);
    cooki.push_back(236);
    cooki.push_back(74656);
    cooki.push_back(30);
    cooki.push_back(51);
    cooki.push_back(5895);
    cooki.push_back(565);
    cooki.push_back(985);
    cooki.push_back(5456);
    sort(greed.begin(),greed.end());
    sort(cooki.begin(),cooki.end());
    int count = 0 ;
    int i = 0 , j = 0 ;
    while(i<greed.size()&&j<cooki.size()){
        if(cooki[j]>greed[i]){
            count++;
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    cout<<"max greedy student whose greed can ful fill is "<<count;

}