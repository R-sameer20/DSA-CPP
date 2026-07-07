#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getRingScore(int i, int j) {
    int top = i;
    int bottom= 9 - i;
    int left = j;
    int right = 9 - j;

    int ring = min({top, bottom, left, right});
    return ring + 1;
}

void matrixItration() {
    char arr[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin>>arr[i][j];
        }
    }

    int count = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = i; j < 10; j++) {
            if (arr[i][j] == 'X') {
                
                count += getRingScore(i, j);
            }
            if ( i!=j && arr[j][i] == 'X') {
                
                count += getRingScore(j, i);
            }
        }
    }
    
    cout << count << "\n";
    return;
}

int main() { 
    int t;
    cin >> t;
    while (t--) {
        matrixItration();
    }
    return 0;
}