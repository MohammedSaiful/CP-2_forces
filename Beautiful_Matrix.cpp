#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int arr[5][5], sub1, sub2, cnt;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                sub1 = i - 2;
                sub2 = j - 2;
                if (sub1 < 0)
                    sub1 = -sub1;
                if (sub2 < 0)
                    sub2 = -sub2;

                cnt = sub1 + sub2;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
