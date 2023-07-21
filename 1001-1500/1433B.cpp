#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        auto first = find(a, a + n, 1);
        int firstIndex = (first != a + n) ? first - a : -1;

        int lastIndex = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == 1)
            {
                lastIndex = i;
                break;
            }
        }
        int count = 0;
        for (int i = firstIndex; i < lastIndex; i++)
        {
            if (a[i] == 0)
                count++;
        }

        cout << count << endl;
    }
    return 0;
}
