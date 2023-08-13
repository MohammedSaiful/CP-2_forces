#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, k, cnt, sub, siz;
    cin >> n >> k;
    cnt = 0;
    for (int i = 1; i <= k; i++)
    {
        cnt = n % 10;

        if (cnt == 0)
        {
            n = n / 10;
        }
        else
        {
            n = n - 1;
        }
    }
    cout << n;

    return 0;
}
