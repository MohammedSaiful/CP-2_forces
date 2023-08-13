#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, k, cnt, sub, siz;
    string str;

    cin >> str;
    map<char, int> mp;
    cnt = 0;
    siz = str.size();
    for (int i = 0; i < siz; i++)
    {
        mp[str[i]]++;
        if (mp[str[i]] == 1)
        {
            cnt++;
        }
    }

    if (cnt % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}
