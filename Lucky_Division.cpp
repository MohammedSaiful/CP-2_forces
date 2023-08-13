#include <bits/stdc++.h>
using namespace std;
vector<int> arr;
void func(int n)
{
    int cnt, N, n1, temp, p = 0;
    for (int i = 4; i <= n; i++)
    {
        cnt = 10;
        N = 0;
        n1 = temp = i;
        while (n1 != 0)
        {
            // temp=n%10;
            if (n1 % 10 == 7 || n1 % 10 == 4)
            {
                cnt = 1;
            }
            else
            {
                N = 0;
                break;
            }
            n1 = n1 / 10;
            N = 1;
        }
        if (cnt == N)
        {
            arr.push_back(temp);
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t, n, siz, sub, cnt;
    string str;

    cin >> n;
    func(n);
    siz = arr.size();
    cnt = 0;
    for (int i = 0; i < siz; i++)
    {
        if (n % arr[i] == 0)
        {
            cout << "YES" << endl;
            cnt = 1;
            break;
        }
    }
    if (cnt != 1)
    {
        cout << "NO";
    }
    return 0;
}
