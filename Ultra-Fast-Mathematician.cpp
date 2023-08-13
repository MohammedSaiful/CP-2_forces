#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t, n, num, cnt, siz;
    string str, str1,str2;
    cin >> str;
    cin >> str1;
    siz = str.size();
    for (int i = 0; i <siz; i++)
    {
        if(str[i]==str1[i])
        {
            str2+='0';
        }
        else
        {
            str2+='1';
        }
    }
    cout<<str2;
        return 0;
}