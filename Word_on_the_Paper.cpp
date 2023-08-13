#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin >>t;

    while(t--)
    {
        string str;
        char ch[8][8];
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                cin>>ch[i][j];
                if(ch[i][j]>='a' && 'z'>=ch[i][j])
                    str+=ch[i][j];
            }
        }
        cout<<str<<endl;

    }
    return 0;
}
