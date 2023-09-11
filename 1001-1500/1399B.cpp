#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int h = 0, n, a[50], b[50], aa[50], bb[50];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            aa[i] = a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            bb[i] = b[i];
        }
        sort(aa, aa + n);
        sort(bb, bb + n);

        for (int i = 0; i < n; i++)
        {
            h += a[i] + b[i] - min(b[i] - bb[0], a[i] - aa[0]) - aa[0] - bb[0];
        }
        cout << h << endl;
    }
}
