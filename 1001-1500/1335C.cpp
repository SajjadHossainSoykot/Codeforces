#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int arr[200001] = {0};
        int y = -1, x = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {   
            int m;
            cin >> m;
            arr[m]++;
            if (arr[m] == 1) x++; //Counting Distinct
            y = max(arr[m], y); //Counting Repeat
        }
        cout << max(min(x, y - 1), min(x - 1, y)) << endl;
    }
}