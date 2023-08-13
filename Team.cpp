#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b, c, T, sub, cnt;
    cin >> T;
    sub = 0;
    for (int i = 1; i <= T; i++)
    {
        cin >> a >> b >> c;
        cnt = 0;
        if (a == 1)
            cnt++;
        if (b == 1)
            cnt++;
        if (c == 1)
            cnt++;

        if (cnt > 1)
        {
            sub++;
        }

        if (i == T)
            cout << sub << endl;
    }

    return 0;
}
