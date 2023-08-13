#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, a, b, k, cnt, sub, siz;
    cin >> n;
    int arr[n][2];

    sub = cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        cnt += (b - a);
        sub = max(sub, cnt);
    }
    cout << sub;
    return 0;
}
