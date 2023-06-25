#include <bits/stdc++.h>
using namespace std;
int main()
{
    string c[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int x;
    cin >> x;
    while (x > 5)
    {
        x = x / 2 - 2;
    }
    cout << c[x - 1];
}