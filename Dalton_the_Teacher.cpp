#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t, n, siz, sub, cnt;
    cin >> t;
    while (t--)
    {
        cin >> n;
        siz = n + 1;
        int arr[siz];
        cnt = sub = 0;
        for (int i = 1; i < siz; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i < siz; i++)
        {
            if (arr[i] == i)
            {
                cnt++;
            }
            // else if(arr[i]>n) break;
        }
        sub = cnt / 2;
        cnt = sub + (cnt % 2);
        cout << cnt << endl;
    }
    return 0;
}
