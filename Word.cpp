#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, cnt, sub, siz;
    string str, str1;
    cin >> str;
    siz = str.size();
    cnt = sub = 0;
    for (int i = 0; i < siz; i++)
    {
        if (str[i] >= 'A' && 'Z' >= str[i])
        {
            cnt++;
        }
        else
        {
            sub++;
        }
    }
    if (sub >= cnt)
    {
        for (int i = 0; i < siz; i++)
        {
            if (str[i] >= 'A' && 'Z' >= str[i])
            {
                str[i] = tolower(str[i]);
            }
        }
    }
    else if (cnt > sub)
    {
        for (int i = 0; i < siz; i++)
        {
            if (str[i] >= 'a' && 'z' >= str[i])
            {
                str[i] = toupper(str[i]);
            }
        }
    }
    cout << str << endl;

    return 0;
}
