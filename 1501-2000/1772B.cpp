#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a[4];
        for(int i = 0; i < 4; i++)
            cin >> a[i];
        int maxpos = max_element(a,a+4) - a;
        int minpos = min_element(a,a+4) - a;
        if(maxpos + minpos == 3)
            puts("YES");
        else
            puts("NO");
    }
}