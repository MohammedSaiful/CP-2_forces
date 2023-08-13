#include <bits/stdc++.h>
using namespace std;

#define boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define input freopen("input.txt", "r", stdin);
#define output freopen("output.txt", "w", stdout);
#define endl '\n';
typedef long long ll;

int main()
{
    map<char, int> mp;
    boost;

    int n, cnt = 0;
    cin >> n;
    char ch;

    if (n < 26)
    {
        cout << "NO";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            cin >> ch;
            ch = tolower(ch);
            mp[ch]++;
            if (mp[ch] == 1)
            {
                cnt++;
            }
        }
        if (cnt == 26)
            cout << "YES";
        else
            cout << "NO";
    }

    return 0;
}