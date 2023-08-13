#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c, w, i;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if (a + b >= 10)
        {
            cout << "Yes" << endl;
        }
        else if (b + c >= 10)
        {
            cout << "YES" << endl;
        }
        else if (a + c >= 10)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}
