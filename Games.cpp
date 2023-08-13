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
    boost;
    int n, num1, num2, cnt;
    cin >> n;
    int host[n], home[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num1 >> num2;
        for (int j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                host[i] = num1;
            }
            else
            {
                home[i] = num2;
            }
        }
    }
    cnt=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(host[i]==home[j])
            {
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}