#include<iostream>
using namespace std;
bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    } 
    return true; 
}

long long  nextPrime(long long x) {
    while (true) {
        if (isPrime(x)) {
            return x;
        }
        x++;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long d;
        cin>>d;
        long long p , q;
        p = nextPrime(d+1);
        q = nextPrime(d+p);

        cout<<p*q<<"\n";

    }
    return 0;
}