#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int numIngre;
long long r;
vector<long long> avail;
vector<long long > req;

bool canMake(long long x) {
    long long cost = 0LL;
    for (int i = 0; i < numIngre; i++) {
        if(max(x,x*req[i])>(r+avail[i])) return false;
        cost += max(x * req[i]-avail[i],0LL);
    }
    return cost <= r;
}

int main() {
    cin >> numIngre;
    cin>>r;
    req.resize(numIngre);
    avail.resize(numIngre);

    for (int i = 0; i < numIngre; i++) {
        cin >> req[i];
    }
    for (int i = 0; i < numIngre; i++) {
        cin >> avail[i];
    }

    long long left = 0, right = 1e15; // Set a large upper bound for binary search

    while (left < right) {
        long long mid = (left + right + 1) / 2;
        if (canMake(mid)) {
            left = mid;
        } else {
            right = mid - 1;
        }
    }

    cout << left << endl;

    return 0;
}
