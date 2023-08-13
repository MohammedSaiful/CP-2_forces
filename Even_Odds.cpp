#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long long int t,i,j, n, k, siz, num, sub, cnt;
    cin >> n >> k;
    num = ceil(n/2.00);
    if(num>=k)
    {
        siz=(k*2)-1;
        cout<<siz<<endl;
    }
    else 
    {
        siz=(k-num)*2;
        cout<<siz<<endl;
    }
    return 0;
}
