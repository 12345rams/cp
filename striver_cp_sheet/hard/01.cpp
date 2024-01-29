#include <iostream>
#include <cmath>
using namespace std;
//https://codeforces.com/contest/689/problem/C
//using binary search
int main() {
    long long m;
    cin >> m;

    long long left = 0, right = 1e16;
    long long ans = -1;

    while (left <= right) {
        long long mid = (left + right) / 2;
        long long cnt = 0;

        for (long long k = 2; k * k * k <= mid; k++) {
            if((k*k*k)!=0)
            cnt += mid / (k * k * k);
        }
        if(cnt==m) ans=mid;
        if (cnt >= m) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << ans << endl;

    return 0;
}
