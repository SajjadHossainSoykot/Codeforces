#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char c='B';
		for(int j=0;j<8;j++)
		{
			string a;
			cin>>a;
			if(a=="RRRRRRRR") c='R';
		}
		cout<<c<<endl;
    }
}