#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int cnt, sub, siz;

    string str1 = "123", str2, str3;
    cin >> str2;
    siz = str2.size();
    sub = siz - 1;
    cnt = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < siz; j++)
        {
            if (str1[i] == str2[j])
            {
                cnt++;
                str3 += str2[j];
                    str3 += '+';
                
            }
        }
    }
    int siz1=str3.size();
    for(int p=0; p<siz1-1; p++)
    {

        cout << str3[p];
    }
    return 0;
}
