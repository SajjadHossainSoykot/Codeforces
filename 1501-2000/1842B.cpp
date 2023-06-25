#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n >> x;
		long long a, ans = 0;

		for (int i = 0; i < 3; i++)
		{
			long long y = 0;
			for (int j = 0; j < n; j++)
			{
				cin >> a;
				y = y | a;
				if ((y | x) == x)
					ans = ans | y;
			}
		}
		cout << ((ans == x) ? "Yes" : "NO") << endl;
	}
}