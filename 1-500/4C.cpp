#include <bits/stdc++.h>
using namespace std;
int main()
{   
    string s;
    int n;
    map<string, int> a;
    cin >> n;
    while (n--)
    {   
        cin >> s;
        if (a[s])
            cout << s << a[s] << endl;
        else
            cout << "OK" << endl;
        a[s]++;
    }
}