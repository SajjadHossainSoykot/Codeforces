#include <iostream>
using namespace std;
int main()
{
    long long t, n, m, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> x;
        cout << --x % n * m + x / n + 1 << endl;
    }
}