#include <iostream>
using namespace std;
int a[10001], n, i, j, c;
int main()
{
    cin >> n;
    for (i = 2; i <= n; i++)
    {
        if (a[i] == 0)
            for (j = i; j <= n; j += i)
                a[j]++;
        if (a[i] == 2)
            c++;
    }
    cout << c;
}
