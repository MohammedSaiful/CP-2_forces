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
    sub = a * b;
    for (int i = 2; i <= sub; i += 2)
    {
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
