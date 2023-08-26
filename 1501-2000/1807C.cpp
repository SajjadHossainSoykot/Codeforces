#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int f = 1;
        for (int i = 0; i < n; i += 2)
            for (int j = 1; j < n; j += 2)
                if (s[i] == s[j])
                    f = 0;
        // int map[26] = {-1};

        // for (int i = 0; i < n; i++)
        // {
        //     int cur = (s[i] - 'a');
        //     if (map[cur] == -1)
        //     {
        //         map[cur] = (i % 2);
        //     }
        //     else
        //     {
        //         if (map[cur] != (i % 2))
        //         {
        //             f = false;
        //         }
        //     }
        // }
        cout << (f ? "YES" : "NO") << endl;
    }
}
