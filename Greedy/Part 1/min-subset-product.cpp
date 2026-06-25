#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int minProduct(vector<int> &arr){
    int cn = 0 , cz = 0 , cp = 0 ;
    int pp = 1 , pn = 1;
    int largNeg = INT8_MIN;
    for(int i = 0 ; i<arr.size() ; i++){
        if(arr[i] == 0 ) cz++;
        if(arr[i] > 0 ){
            cp++;
            pp*=arr[i];

        }
        if(arr[i] < 0 ){
            cn++;
            pn*=arr[i];
            largNeg = max(largNeg, arr[i]);
        }
    }
    if(cn==0 ){
        if(cz >0)return 0;
        else {
            auto it = min_element(arr.begin() , arr.end());
            return *it;
        }

    }
    else{
        if(cn%2 == 0){ 
            return pp*(pn/largNeg);

        }
        else{
            return pp*pn;
        }
    }
    


}
int main(){
   
    vector<int> arr1 = {3, 4, 2, 5};
    cout << "Test Case 1: " << minProduct(arr1) << "\n";

 
    vector<int> arr2 = {3, 0, 4, 2};
    cout << "Test Case 2: " << minProduct(arr2) << "\n";


    vector<int> arr3 = {-2, -3, -4, 5, 0};
    cout << "Test Case 3: " << minProduct(arr3) << "\n";


    vector<int> arr4 = {-2, -3, -4, -5, 2};
    cout << "Test Case 4: " << minProduct(arr4) << "\n";

    return 0;
}
