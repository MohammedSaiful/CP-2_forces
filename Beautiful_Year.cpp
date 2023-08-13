#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, siz;
    string str;
    cin >> n;
    for (int i = n + 1; i < 9500; i++)
    {
        str = to_string(i);
        if (str[0] != str[1] && str[0] != str[2] && str[0] != str[3] && str[1] != str[2] && str[1] != str[3] && str[2] != str[3])
        {
            break;
        }
    }
    cout << str;
    return 0;
}
