#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n < 7 || n == 9)
            cout << "NO\n";
        else if (n % 3 == 0)
            cout << "YES\n"
                 << 1 << " " << 4 << " " << n - 5 << endl;
        else
            cout << "YES\n"
                 << 1 << " " << 2 << " " << n - 3 << endl;
    }
    return 0;
}