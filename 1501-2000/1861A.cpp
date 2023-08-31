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
        if (s.find('1') < s.find('3'))
            cout << "13"<<endl;
        else
            cout << "31"<<endl;
    }
}