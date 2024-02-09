#include <bits/stdc++.h>
#define ll long long
using namespace std;
//https://codeforces.com/contest/1914/problem/C
void evaluate(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n),b(n);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];

    int sum = 0, mx = 0, res = 0;
    for(int i=0; i<min(n,k); i++){
        sum += a[i];
        mx = max(mx,b[i]);
        res = max(res, sum+mx*(k-i-1));
    }
    cout << res << endl;
}

int main() { 
	ll t; cin>>t;
    while(t--){
        evaluate();
    } 
}
