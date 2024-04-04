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

       int n,m;
       cin>>n>>m;
       int maxi=((n-m+1)*(n-m))/2;
       int remain=n%m;
       int mini=(m-remain)*(((n/m)*(n/m-1)/2))+remain*(((n/m+1)*(n/m)/2));
       cout<<mini<<" "<<maxi<<endl;
    
    return 0;
}