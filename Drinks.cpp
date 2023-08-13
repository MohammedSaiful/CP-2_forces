#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, k, siz, sum, cnt;
    double num, tot;
    cin >> n;
    int arr[n];
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    num = n;
    tot = (sum / num);
    cout << fixed << setprecision(12);
    cout << tot << endl;
    return 0;
}
