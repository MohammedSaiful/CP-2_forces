#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, k, cnt, sub, siz;
    string str;
    cin>>str;
    siz=str.size();
    cnt=0;
    for(int i=0; i<siz; i++)
    {
        if(str[i]=='4' || str[i]=='7')
        {
            cnt++;
        }
    }
    if(cnt==4 || cnt==7)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;

    return 0;
}
