#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1]={0};
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a+1,a+n+1);
        cout<<(a[n]-a[n-1]>1?"NO":"YES")<<endl;
    }
}
