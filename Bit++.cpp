#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, T;
    int x = 0;
    char arr[4];
    cin >> T;
    for (i = 0; i < T; i++)
    {
        cin >> arr;
        if (arr[1] == '+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}
