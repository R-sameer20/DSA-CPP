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
void reverse (int i , int j ,vector <int> &vec ){
    while(i<=j){
        int temp = vec[i];
        vec[i] = vec[j] ; 
        vec[j] = temp ;
        i++;
        j--;
    }

}
int main(){
    int n ; 
    cout<<"Enter the number of elements : ";
    cin>>n; 
    int a,b;
    vector<int>v1 ;
    cout<<"Enter the elements :\n";
    for(int i = 0 ; i<=n-1 ; i++){
        int temp;
        cin>>temp;
        v1.push_back(temp);
    }

    display(v1) ;
    cout<<endl;

    cout<<"Enter the elements betwen yout want to reverse array :\n";
    cout<<endl<<"\nEnter a = 0 , b = n-1 if you want to reverse whole array :\n\n";
   
    cout<<"Enter first number : ";
    cin>>a;
    
    cout<<"Enter second number : ";
    cin>>b;
    
    cout<<endl;
    reverse(a , b , v1);
    cout<<endl;
    display(v1);


}
