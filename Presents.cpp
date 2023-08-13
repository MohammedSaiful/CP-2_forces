#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, k, siz, num, sub, cnt;
    cin >> n;
    int arr[n + 1], arr1[n + 2];

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr1[arr[i]] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout<<arr1[i]<<" ";
    }
    return 0;
}
