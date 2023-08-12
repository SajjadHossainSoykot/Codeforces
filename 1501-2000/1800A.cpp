#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        for (int i = 0; i < n; i++) {
			s[i] = tolower(s[i]);
		}
		s.resize(distance(s.begin(), unique(s.begin(),s.end())));
		cout<<(s=="meow"?"YES":"NO")<<endl;
    }
}