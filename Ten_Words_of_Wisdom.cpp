#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> t;

    while (t--)
    {
        cin >> n;
        int arr[n], a, p, q;
        p = q = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> arr[i];
            if (10 >= a)
            {
                if (arr[i] > p)
                {
                    p = arr[i];
                    q = i + 1;
                }
            }
        }
        cout << q << endl;
    }
    return 0;
}
