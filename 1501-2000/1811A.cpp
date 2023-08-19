#include <iostream>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        char d;
        string s;
        cin >> n >> d >> s;
        int i = 0;
        while (i < n && s[i] >= d)
            i++;
        s.insert(i, 1, d);
        cout << s << endl;
    }
}