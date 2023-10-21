#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n, m, k, t = 1;
    char a;
    set<int> p, q;
    cin >> n >> m;
    for (int i = 1; i <= n * m; i++)
    {
        cin >> a;
        k++;
        if (k > m)
            k = 1, t++;
        if (a == 'S')
            p.insert(k), q.insert(t);
    }
    cout << n * m - p.size() * q.size();
}
