#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s[8];
        for (int i = 0; i < 8; i++)
        {
            cin >> s[i];
        }
        int x, y, pos, hash = 0;
        for (int i = 1; i < 7; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                if(s[i][j]=='#'&& s[i-1][j-1]=='#'&&s[i-1][j+1]=='#'&& s[i+1][j-1]=='#'&&s[i+1][j+1]=='#')
                {
                    cout << i+1 << " " << j+1 << endl;
                    break;
                }
            }
        }
    }
}