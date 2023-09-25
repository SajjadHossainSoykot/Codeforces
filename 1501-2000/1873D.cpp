#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, i, s = 0;
        cin >> n >> k;
        string a;
        cin >> a;
        for (i = 0; i < n; i++)
        {
            if (a[i] == 'B')
            {
                s++;
                i += k - 1;
            }
        }
        cout << s << endl;
    }
    return 0;
}