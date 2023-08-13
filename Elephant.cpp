#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int x, sub, cnt;
    cin >> x;
    sub = 1e9;
    for (int i = 1; i <= 5; i++)
    {
        cnt = 0;
        if (x % i == 0)
        {
            cnt = x / i;
        }
        else
        {
            cnt = (x / i) + 1;
        }
        sub = min(sub, cnt);
        // cout<<sub<<" ";
    }

    cout << sub << endl;
    return 0;
}
