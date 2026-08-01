#include <iostream>
#include <vector>
using namespace std;

void primeFactors(long long  n , vector<long long >& ans) {

    while (n % 2 == 0) {
        ans.push_back(2);
        n = n / 2;
    }

    for (int i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            ans.push_back(i);
            n = n / i;
        }
    }

    if (n > 2)
        ans.push_back(n);

    
}

int main() {
    long long n ;
    cout<<"enter No : ";
    cin>>n;
    cout<<"\nPrime factor : \n";
    vector<long long > ans ;
    primeFactors(n , ans);

    for (long long  factor : ans) {
        cout << factor << " ";
    }
    return 0;
}