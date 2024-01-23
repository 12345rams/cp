#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long x)
{
    if (x < 2)
        return false;
    if (x == 2)
        return true;
    if (x % 2 == 0)
        return false;

    for (long long i = 3; i * i <= x; i += 2)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

bool isTPrime(long long x)
{
    long long root = sqrt(x);
    return (root * root == x && isPrime(root));
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        if (isTPrime(x))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
