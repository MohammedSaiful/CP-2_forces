#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, k, w, cnt, sub, siz;
    cin >> k >> n >> w;
    cnt = 0;
    for (int i = 1; i <= w; i++)
    {
        cnt += k * i;
    }
    cnt=cnt-n;
    if (cnt < 0)
        cout << "0" << endl;
    else
        cout << cnt;
    return 0;
}
