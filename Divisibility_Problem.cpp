#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long long int a, b, t, i, j, n, k, siz, num, sub, cnt;
    cin >> t;
    
    for (int i = 0; i < t; i++)
    {
        cnt=num=sub=0;
        cin >> a >> b;
        sub = (a / b);
        if (a%b != 0)
        {
            sub += 1;
            num = b * sub;
            cnt = num - a;
        }
        cout << cnt << endl;
    }
    return 0;
}
