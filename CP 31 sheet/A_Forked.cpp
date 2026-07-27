#include<iostream>
#include<vector>
#include<set>
using namespace std;
void calculate(pair<int , int> &p , int &count , int Xq , int Yq , int a , int b){
    int x = p.first;
    int y = p.second;
    if(x+a==Xq && y+b==Yq) count++;
    else if(x+a==Xq && y-b==Yq) count++;
    else if(x-a==Xq && y+b==Yq) count++;
    else if(x-a==Xq && y-b==Yq) count++;
    else if(x+b==Xq && y+a==Yq) count++;
    else if(x+b==Xq && y-a==Yq) count++;
    else if(x-b==Xq && y+a==Yq) count++;
    else if(x-b==Xq && y-a==Yq) count++;
    

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a , b , Xk , Yk , Xq , Yq ;
        cin>>a>>b;
        cin>>Xk>>Yk;
        cin>>Xq>>Yq;
        set<pair<int , int>> postKnight;
        //(8 , vector<int>(2,0))

        int count = 0;

        postKnight.insert({Xk+a,Yk+b});
        postKnight.insert({Xk+a,Yk-b});
        postKnight.insert({Xk-a,Yk+b});
        postKnight.insert({Xk-a,Yk-b});
        postKnight.insert({Xk+b,Yk+a});
        postKnight.insert({Xk+b,Yk-a});
        postKnight.insert({Xk-b,Yk+a});
        postKnight.insert({Xk-b,Yk-a});


        for(auto x : postKnight){
            calculate( x , count , Xq , Yq ,  a , b );

        }
        

        cout<<count<<endl;



    }
    return 0;
}

// #include<iostream>
// #include<set>
// using namespace std;

// int main(){
//     // Fast I/O
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while(t--){
//         int a , b , Xk , Yk , Xq , Yq ;
//         cin >> a >> b;
//         cin >> Xk >> Yk;
//         cin >> Xq >> Yq;
        
//         // Step 1: All unique spaces that can attack the King
//         set<pair<int , int>> postKnight;
//         postKnight.insert({Xk+a, Yk+b});
//         postKnight.insert({Xk+a, Yk-b});
//         postKnight.insert({Xk-a, Yk+b});
//         postKnight.insert({Xk-a, Yk-b});
//         postKnight.insert({Xk+b, Yk+a});
//         postKnight.insert({Xk+b, Yk-a});
//         postKnight.insert({Xk-b, Yk+a});
//         postKnight.insert({Xk-b, Yk-a});

//         // Step 2: All unique spaces that can attack the Queen
//         set<pair<int , int>> postQueen;
//         postQueen.insert({Xq+a, Yq+b});
//         postQueen.insert({Xq+a, Yq-b});
//         postQueen.insert({Xq-a, Yq+b});
//         postQueen.insert({Xq-a, Yq-b});
//         postQueen.insert({Xq+b, Yq+a});
//         postQueen.insert({Xq+b, Yq-a});
//         postQueen.insert({Xq-b, Yq+a});
//         postQueen.insert({Xq-b, Yq-a});

//         // Step 3: Count common intersections safely without duplicates
//         int count = 0;
//         for(auto x : postKnight){
//             if(postQueen.count(x)) {
//                 count++;
//             }
//         }
        
//         cout << count << "\n";
//     }
//     return 0;
// }