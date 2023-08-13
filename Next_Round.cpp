#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, k, cnt, siz;
    cin >> n >> k;
    siz = n + 1;
    int arr[siz];
    cnt = 0;
    for (int i = 1; i < siz; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < siz; i++)
    {
        if (arr[i] >= arr[k])
        {
            if (arr[i] != 0)
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
