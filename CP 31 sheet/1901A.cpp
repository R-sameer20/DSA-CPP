#include<iostream>
#include<algorithm> 
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int maxGap = 0;
        int lastStation = 0;
        for(int i = 0; i < n; i++) {
            maxGap = max(maxGap, arr[i] - lastStation);
            lastStation = arr[i];
        }
        maxGap = max(maxGap, 2 * (x - lastStation));
        cout << maxGap << endl;
    }
    return 0;
}