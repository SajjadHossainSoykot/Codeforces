#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int carry = 0;
        int k = n;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] + carry >= '5')
            {
                k = i;
                carry = 1;
            }
            else
            {
                s[i] += carry;
                carry = 0;
            }
        }
        for (int i = k; i < n; i++)
            s[i] = '0';
        if (carry)
            s = '1' + s;
        cout << s << endl;
    }
}