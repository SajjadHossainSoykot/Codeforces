#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;        
        cout<<(((k * (k + 1) / 2) > x || ((n - k + 1 + n) * k / 2 < x))?"NO":"YES")<<endl;
    }
}