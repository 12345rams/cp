//https://codeforces.com/problemset/problem/489/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

#define F first;
#define S second;
#define PB push_back;
#define MP make_pair;
#define REP(i, a, b) for (int i = a; i <= b; i++)
;
void solve(int m, int s)
{
    if(s==0&&m==1){
        cout<<0<<" "<<0<<endl;
        return ;
    }
    if (s <=0||((9*m)<s))
    {
        cout << "-1"
             << " "
             << "-1" << endl;
        return;
    }

    vector<int> smlas(m, 0);
    smlas[m - 1] = 1;
    int temp = s - 1;
    int i = 0;
    while (temp > 0)
    {
        if (temp > 9)
        {
            smlas[i] = 9;
            temp = temp - 9;
        }
        else
        {
            smlas[i] += temp;
            break;
        }
        i++;
    }
    for (int i = m - 1; i >= 0; i--)
    {
        cout << smlas[i];
    }
    cout << " ";

    // print the largest number
    smlas = {0};
    for (int i = 0; i < m; i++)
    {
        if (s > 9)
        {
            cout << 9;
            s = s - 9;
        }
        else
        {
            cout << s;
            s = 0;
        }
    }
    cout << endl;
    return;
}
int main()
{
    int m, s;
    cin >> m >> s;
    solve(m, s);
    return 0;
}
