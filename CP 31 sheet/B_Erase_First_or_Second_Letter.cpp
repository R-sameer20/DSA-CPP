#include<iostream>
#include<string>
#include<map>
using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         int count = 1 ;
//         for(int i = 0 ; i<n-1 ; i++){
//             int j = i+1;
//             while(j<n && s[i]!=s[j]){
//                 count++;
//                 j++;
//             }
//             count++;
//         }
//         cout<<count<<"\n";
//     }
// }

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char , int> mp;
        int ans=0;
        int count  =  0;
        for(int i = 0 ; i<n ; i++){
            if(mp[s[i]] != 0 ) ans += count;
            else{
                mp[s[i]]++;
                count++;
                ans+=count;
            }
        }
        cout<<ans<<"\n";
    }
}


// #include<iostream>
// #include<set>
// #include<string>
// using namespace std;
// void calculateUnique(string s , set<string> *collector){
//     if(s.size() == 1 ){
//         collector->insert(s);
//         return;
//     }
//     collector->insert(s);

//     calculateUnique(s.substr(1) , collector);
//     calculateUnique(s.substr(0,1) + s.substr(2) , collector);



// } 
// int uniqueString(){
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     set<string> collector;
//     calculateUnique(s , &collector);
//     return collector.size();
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         cout<<uniqueString()<<endl;
//     }
    
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         int count = 0;
//         for (int i = 0; i<n-1; i++) {
//             if (s[i] != s[i + 1]) {
//                 count+=2; 
//             }
//             else count++;
//             if(i == n-2 && s[i]!=s[i+1]) count++;
//         }

//         cout<<count<<"\n";
    
//     }
// }

