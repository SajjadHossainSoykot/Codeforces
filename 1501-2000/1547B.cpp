#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int len = s.length();
        bool f = true;
        int l = 0, r = len-1;
        for (int i = len-1; i>=0; i--)
        {
            if (s[l] == 'a' + i)
                l++;
            else if (s[r] == 'a' + i)
                r--;
            else
            {
                f = false;
                break;
            };
        }
        cout<<(l<=r?"NO":"YES")<<endl;
    }
}