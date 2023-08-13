#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t, a, b, n, siz, cnt;
    cin >> t;
    cnt = 0;
    while (t--)
    {
        cin >> a >> b;
        if (a < b - 1)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
