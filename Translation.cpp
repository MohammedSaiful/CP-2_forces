#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, a, b, k, cnt, sub, siz;
    string str1,str2,str3;
    cin>>str1>>str2;
    for(int i=str1.size()-1; i>=0;i--)
    {
        str3+=str1[i];
    }
    if(str2==str3)
    {
        cout<<"YES";
    }
    else
    cout<<"NO";
    return 0;
}
