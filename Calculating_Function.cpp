#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long long int n, k, siz, num, sub, cnt;
    cin >> n;
    if(n%2==0)
    {
        cout<<n/2<<endl;
    }
    else
    {
        cout<<-(n+1)/2<<endl;
    }
    return 0;
}
