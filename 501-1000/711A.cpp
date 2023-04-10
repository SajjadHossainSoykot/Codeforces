#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string row[n];
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin>>row[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(row[i][0]=='O' && row[i][1]== 'O')
        {
            flag = true;
            row[i][0]='+'; 
            row[i][1]='+';
            break;
        }
        else if(row[i][3]=='O' && row[i][4]== 'O')
        {
            flag = true;
            row[i][3]='+'; 
            row[i][4]='+';
            break;
        }
    }
    if(flag)
    {   
        cout<<"YES\n";
        for (int i = 0; i < n; i++)
        {
            cout<<row[i]<<endl;
        }
    }
    else cout<<"NO\n";

}