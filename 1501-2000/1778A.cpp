#include <iostream>
using namespace std;
const int sz = 1e5 + 10;
int arr[sz];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        int ans = -1e9;

        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                if (arr[i] == 1)
                    ans = max(ans, sum - 4);
                else
                    ans = max(ans, sum + 4);
            }
            else
                ans = max(ans, sum);
        }

        cout << ans << endl;
    }
}
