#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count;
		count = 0;
		string s;
		cin >> s;
		int f = s.find("1"), l = s.rfind("1");
		for (int i = f; i < l; i++)
		{
			if (s[i] == '0')
				count++;
		}
		cout << count << endl;
    }
}