#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t, n, siz, sub, cnt;
    string str1, str2;
    str2 = "hello";
    siz = str2.size();
    cin >> str1;
    cnt = 0;
    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] == str2[cnt])
        {
            if (cnt == siz)
                break;
            cnt++;
        }
    }
    if (cnt == siz)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
