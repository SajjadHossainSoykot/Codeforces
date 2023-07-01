#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int a[n], b[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n; i++)
			cin >> b[i];
		vector<pair<int, int>> vect;

		for (int i = 0; i < n; i++)
			vect.push_back(make_pair(a[i], b[i]));
		sort(vect.begin(), vect.end());
		for (int i = 0; i < n; i++)
		{
			a[i] = vect[i].first;
			b[i] = vect[i].second;
		}
		int current = k;
		for (int i = 0; i < n; i++)
		{
			if (current >= a[i])
				current += b[i];
			else
				break;
		}
		cout << current << endl;
	}
}