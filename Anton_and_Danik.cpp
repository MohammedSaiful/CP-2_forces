#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, a, b, k, cnt, sub, siz;
    cin>>n;
    string str1,str2,str3;
    cin>>str1;
    siz=str1.size();
    cnt=sub=0;
    for(int i=0; i<siz;i++)
    {
        if(str1[i]=='A')
        {
            cnt++;
        }
        else
        {
            sub++;
        }
    }
    if(cnt>sub)
    {
        cout<<"Anton";
    }
    else if(cnt<sub)
    {
        cout<<"Danik";
    }
    else if(cnt==sub)
    {
        cout<<"Friendship";
    }
    return 0;
}
