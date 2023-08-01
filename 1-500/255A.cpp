#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[3] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i % 3] += a[i];
    }
    string ans = ((b[0] > b[1] && b[0] > b[2]) ? "chest" : (b[1] > b[2] ? "biceps" : "back"));
    cout << ans << endl;
}