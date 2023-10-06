#include <iostream>
using namespace std;
int q, n, k, a[100];
int main()
{
    cin >> q;
    while (q--)
    {
        cin >> n >> k;
        int x = -1, y = -1, z;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
        {
            cin >> z;
            if (a[i] + i - 1 <= k)
            {
                if (z > x)
                    x = z, y = i;
            }
        }
        cout << y << endl;
    }
}