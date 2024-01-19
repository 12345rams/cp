#include <iostream>
#include <vector>
#include <map>
using namespace std;


int main() {
    int n;
    cin >> n;
    map<int,int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v[x]=i;
    }
   

    int m;
    cin >> m;
    long long stepv = 0;
    long long stepp = 0;
    for (int i = 0; i < m; i++) {
        int find1;
        cin >> find1;
        int y = v[find1]+1;
        if (y != 0) {
            stepv += y;
            stepp += n - y + 1;
        }
    }

    cout << stepv << " " << stepp << endl;
    return 0;
}
