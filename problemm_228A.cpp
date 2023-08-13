#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a,b,c,d, num, cnt, siz;
    cin >>a>>b>>c>>d;
    cnt=0;
    if(a==b) cnt++;
    else if(a==c) cnt++;
    else if(a==d)cnt++;
    if(b==c)cnt++;
    else if(b==d)cnt++;
    if(c==d)cnt++;
    cout<<cnt;

    return 0;
}