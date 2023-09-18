#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        bool found = false;

        // Start from a (instead of 1) and iterate up to sqrt(b) for both i and j
        for (int i = 1; i <= b; i++) {
            for (int j = 1; j <= b; j++) {
                if (i + j >= a && i + j <= b && __gcd(i, j) != 1) {
                    found = true;
                    cout << i << " " << j << endl;
                    break;
                }
            }
            if (found) {
                break;
            }
        }

        if (!found) {
            cout << "-1" << endl; // If no such pair exists
        }
    }

    return 0;
}
