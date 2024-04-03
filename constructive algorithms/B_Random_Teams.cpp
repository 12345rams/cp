#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<pair<ll,ll>> vpll;

#define F first
#define S second
#define pb push_back
#define mp make_pair
#define FOR(i, a, b)  for (ll i = a; i <= b; i++)

#define int ll

void solve(vector<int>& a, int n) {
   
}

int32_t main() {
    int t;
    cin >> t; 
    while(t--) {
        ll n;
        cin >> n;
        vector<int> a(n);
        FOR(i, 0, n - 1) {
            cin >> a[i];
        }
        solve(a, n);
    }
    return 0;
}