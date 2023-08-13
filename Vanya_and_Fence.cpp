#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, a, b, k, cnt, sub, siz;
    cin >> n >> k;
    int arr[n];
    cnt = sub = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > k)
        {
            cnt += 2;
        }
        else if (k >= arr[i])
        {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}
