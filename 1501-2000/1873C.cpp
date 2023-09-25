#include <bits/stdc++.h>
using namespace std;
int t;
char a[11][11];
int main()
{
    cin >> t;
    while (t--)
    {
        int sum = 0;
        for (int i = 1; i <= 10; i++)
            for (int j = 1; j <= 10; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'X')
                    sum += min(min(i, j), 10 - max(i, j) + 1);
            }
        cout << sum << endl;
    }
    return 0;
}