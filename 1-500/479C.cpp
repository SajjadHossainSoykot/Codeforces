#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d=0;
    cin >> n;
    vector<pair<int, int>> v(n);
    for(auto&[a,b] : v)
        cin >> a >> b;
    sort(v.begin(), v.end());
    for(auto&[a,b] : v)
        d = b<d ? a : b;
    cout << d;
}