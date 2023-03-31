#include<bits/stdc++.h>
using namespace std;
int main()
{
    char keyboard[]="qwertyuiopasdfghjkl;zxcvbnm,./";
    int keylen=strlen(keyboard);
    char side;
    cin>>side;
    char input[120];
    cin>>input;
    //scanf("%s", input);
    int inlen=strlen(input);
    if(side=='R')
    {
        for (int i = 0; i < inlen; i++)
        {
            for(int j=0; j<keylen; j++)
            {
                if(input[i]==keyboard[j])
                {
                    printf("%c", keyboard[j-1]);
                    break;
                }
            }
        }
        
    }
    else
    {
        for (int i = 0; i < inlen; i++)
        {
            for(int j=0; j<keylen; j++)
            {
                if(input[i]==keyboard[j])
                {
                    printf("%c", keyboard[j+1]);
                    break;
                }
            }
        }
        
    }
}