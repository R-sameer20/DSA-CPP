#include<iostream>
#include<vector>
using namespace std; 
int main(){
    int row , col ;
    
    
    cout<<"Enter number of rows of matrix : ";
    cin>>row;
    cout<<"Enter number of colums of matrix : ";
    cin>>col;
    
    vector< vector<int> > v(row , vector<int>(col));
    
    cout<<"Enter the binory(0,1) elements of matrix : \n";
    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j<col ; j++){
            cin>>v[i][j];
        }
    
    }
    for(int i = 0 ; i<row ; i++){
        if(v[i][0]==0){
            for(int j = 0 ; j<col ; j++){
                if(v[i][j]==0){
                    v[i][j]=1;
                }
                else{
                    v[i][j]=0;
                }
            }
        }
    }
 
    
    for(int j = 0 ; j<col ; j++){
        int noz=0 ;
        int noo=0 ;
        for(int i=0 ; i<row ; i++){
            if(v[i][j]==0){
                noz++;
            }
            else{
                noo++;
            }
        }
        if(noz>noo){
        for(int i = 0 ; i<row ; i++){
            if(v[i][j]==0){
                v[i][j]=1;
            }
            else{
                v[i][j]=0;
            }
            
            }
        }
    }

    int sum = 0 ;
    int x = 1;
    
    for(int i = 0 ; i<row ; i++){
        for(int j=col-1 ; j>=0 ; j--){
            sum+=(v[i][j]*x);
            x*=2;

        }
    }
    cout<<"The possible maximum of given matrix : ";
    cout<<sum;


}