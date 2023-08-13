#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif */
    int i, T, n, k, sub, cnt;
    cin >> T;

    while (T--)
    {
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);

        sub = 1;
        cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - arr[i - 1] <= k)
            {
                cnt++;
            }
            else
            {
                sub = max(sub, cnt);
                cnt = 1;
            }
            sub = max(sub, cnt);
        }
        cout << n - sub << endl;
    }
    return 0;
}
