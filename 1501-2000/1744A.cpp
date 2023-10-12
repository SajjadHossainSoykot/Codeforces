#include <iostream>
using namespace std;
int arr[55];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        int k = 1;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cin >> s;
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j] && s[i] != s[j])
                {
                    k = 0;
                }
            }
        cout << ((k == 1) ? "YES" : "NO") << endl;
    }
}