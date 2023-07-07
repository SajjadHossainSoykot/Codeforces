#include<bits/stdc++.h>
using namespace std;
int rowCheck(const string box[])
{
    for (int i = 0; i < 3; i++)
    {
        if(box[i][0]==box[i][1] && box[i][1]==box[i][2] && box[i][0]!='.')return i;
    }
    return -1;
}
int colCheck(const string box[])
{
    for (int i = 0; i < 3; i++)
    {
        if(box[0][i]==box[1][i] && box[1][i]==box[2][i] && box[0][i]!='.')return i;
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string box[3];
        cin>>box[0]>>box[1]>>box[2];
        char ans;
        bool flag = false;
        int row = rowCheck(box);
        int col = colCheck(box);
        if(row>-1)ans=box[row][0];
        else if(col>-1)ans=box[0][col];
        else if(box[0][0]==box[1][1] && box[1][1]==box[2][2] && box[1][1]!='.')ans=box[1][1];
        else if(box[0][2]==box[1][1] && box[1][1]==box[2][0] && box[1][1]!='.')ans=box[1][1];
        else ans='D';
        cout << ((ans != 'D') ? string(1, ans) : "DRAW") << endl;

    }
}
