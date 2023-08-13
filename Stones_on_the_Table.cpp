#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, cnt, sub, siz;
    cin >> n;
    char ch[n];
    cin >> ch;
    cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (ch[i] == ch[i + 1])
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
