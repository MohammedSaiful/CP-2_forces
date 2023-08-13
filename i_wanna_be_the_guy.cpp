#include <bits/stdc++.h>
using namespace std;
set<int>ss;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t,x, n, num, cnt, siz;
    cin >> n;
    for(int i=0; i<2; i++)
    {
        cin>>t;
        while(t--)
        {
            cin>>x;
            ss.insert(x);
        }
    }
    cnt=ss.size();
    if(cnt==n)
    cout<<"I become the guy."<<endl;
    else
    cout<<"Oh, my keyboard!"<<endl;

    return 0;
}