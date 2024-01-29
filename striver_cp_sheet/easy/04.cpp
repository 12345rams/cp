#include <iostream>
#include <vector>
#include <set>
using namespace std;

long long t, n, h;

bool isPossible(long long mid, vector<long long>& v) {
    long long tdamage = 0;
    for (int i = 0; i < n; i++) {
        long long damage = (i == n-1) ? mid : min(mid, static_cast<long long>(v[i+1]) - v[i]);
        tdamage += damage;
    }
    return tdamage >= h;
}

int main() {
    cin >> t;
    while (t > 0) {
        cin >> n >> h;
        vector<long long> attacks(n);

        for (int i = 0; i < n; i++) {
            cin >> attacks[i];
        }

        long long left = 1, right = h;

        while (left <= right) {
            long long mid = (left + right) / 2;
            if (isPossible(mid, attacks)) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        cout << left << endl;
        t--;
    }
    return 0;
}
