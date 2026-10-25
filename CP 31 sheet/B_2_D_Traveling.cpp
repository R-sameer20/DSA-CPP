// intution compare the cost of the direct flight and the cost of
// sum of mearest major city from A and neaarest major city from B

#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std ;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n , k , a , b;
        cin>>n>>k>>a>>b;
        vector<pair<ll,ll>>cordinates(n+1);
        for(int m = 1 ; m<=n ; m++){
            int i , j;
            cin>>i>>j;
            cordinates[m].first = i;
            cordinates[m].second = j;
        } 
        if(a <=k && b<=k){
            cout<<0<<"\n";
        }
        // else if(a<=k || b<=k ){
        //     ll ans = abs((cordinates[a].first + cordinates[a].second) - 
        //             (cordinates[b].first + cordinates[b].second) );
        //     cout<<ans<<"\n";
        // }
        else{

            // |x_i - x_j| + |y_i - y_j| = max(|(x_i + y_i) - (x_j + y_j)|, |(x_i - y_i) - (x_j - y_j)|)

            ll directFlightCost = abs(cordinates[a].first - cordinates[b].first) + abs(cordinates[a].second - cordinates[b].second);
            
            ll nearestMajorFromA = (ll)4e18; 
            ll nearestMajorFromB = (ll)4e18;

            for(int i = 1 ; i<=k ; i++){
                ll x = abs(cordinates[a].first-cordinates[i].first) + abs(cordinates[a].second-cordinates[i].second);
                ll y = abs(cordinates[b].first-cordinates[i].first) + abs(cordinates[b].second-cordinates[i].second);
                nearestMajorFromA = min(nearestMajorFromA , x );
                nearestMajorFromB = min(nearestMajorFromB , y);  
            }

            ll ans = min (directFlightCost , (nearestMajorFromA + nearestMajorFromB) );
            cout<<ans<<"\n";
            
        }
    }
    return 0;
}