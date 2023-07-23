#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        s1 += s2;
        cout << set<char>(s1.begin(), s1.end()).size() - 1 << endl;
    }
}