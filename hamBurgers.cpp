#include <iostream>
#include <algorithm>

using namespace std;

string recipe;
int nb, ns, nc; 
int pb, ps, pc; 
long long r; 

// Function to check if Polycarpus can make a certain number of hamburgers given a budget
bool canMake(long long x) {
    long long neededB = max(0LL, x * count(recipe.begin(), recipe.end(), 'B') - nb);
    long long neededS = max(0LL, x * count(recipe.begin(), recipe.end(), 'S') - ns);
    long long neededC = max(0LL, x * count(recipe.begin(), recipe.end(), 'C') - nc);

    long long cost = neededB * pb + neededS * ps + neededC * pc;

    return cost <= r;
}

int main() {
    cin >> recipe;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;

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
