#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int note[101] = {0};
    int a[n];
    bool f = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        note[a[i]]++;
        if (a[i] == 50)
        {
            if (note[25] == 0)
            {
                f = 0;
                break;
            }
            else
                note[25]--;
        }
        else if (a[i] == 100)
        {
            if (note[25] == 0 || (note[25]<3 && note[50]==0))
            {
                f = 0;
                break;
            }
            else
            {
                if(note[50]!=0){
                    note[50]--;
                    note[25]--;
                }
                else note[25]-=3;

            }
        }
    }
    cout<<(f?"YES":"NO")<<endl;
}