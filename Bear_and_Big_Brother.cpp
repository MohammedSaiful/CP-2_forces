#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b, c, T, sub, cnt = 0;
    cin >> a >> b;
    for (int i = 1; i <= 15; i++)
    {
        a *= 3;
        b *= 2;
        cnt++;
        if (a > b)
            break;
    }
    cout << cnt << endl;
    return 0;
}
