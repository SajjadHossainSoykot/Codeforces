#include <iostream>
using namespace std;
int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << min(min(a, b), (a + b) / 3) << endl;
    }
}