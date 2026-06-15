#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
bool perfect(int n ){
    int root = sqrt(n);
    if(root*root){
        return true;
    }
}
int main(){
    int c;
    cout<<"Enter the number : ";
    cin>>c;
    int x = 0 ;
    int y = c;
    while(x<y){
        if(perfect(x) && perfect(y)){
            return true;
            x++;
            y++;
        }
        
    }
    return false;

}


















