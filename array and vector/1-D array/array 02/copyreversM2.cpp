#include<iostream>
#include<vector>
using namespace std;
void display(vector <int> &vec ){
    for(int i = 0 ; i<vec.size() ; i++){
        if(i>vec.size()){
            break;
        }
        cout<<vec[i]<<" ";
        }
        cout<<"\n";
}
int main(){
    vector<int> v1;
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    cout<<"Enter the elements :\n";
    for(int i = 0 ; i<=n-1 ; i++){
        int temp ; 
        cin>>temp;
        v1.push_back(temp);
    }
    cout<<endl;
    display( v1 );
    cout<<endl;

    for(int i = 0  , j=n-1 ; i<=j ; i++ ,j--){
        int temp = v1[j];
        v1[j]=v1[i];
        v1[i]=temp;

    }
    
    display( v1 );
    cout<<endl;



}