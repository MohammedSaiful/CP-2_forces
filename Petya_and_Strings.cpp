#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, k, cnt, siz;
    string str1, str2;

    cin >> str1 >> str2;
    siz = str1.size();
    for (int i = 0; i < siz; i++)
    {
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }

    if (str1 > str2)
        cout << 1 << endl;
    else if (str1 < str2)
        cout << -1 << endl;
    else
        cout << 0 << endl;
    return 0;
}
