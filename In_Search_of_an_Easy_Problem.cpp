#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t, n, siz, sub, cnt;
    cin >> n;
    int arr[n];
    cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            cnt++;
        }
    }
    if (cnt > 0)
        cout << "HARD";
    else
        cout << "EASY";
    return 0;
}
