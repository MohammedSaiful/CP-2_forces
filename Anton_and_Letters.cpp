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
    boost; input; output;

    int n, siz,cnt = 0;
    string str;
    getline(cin,str);
    siz=str.size();
        for (int i = 0; i <siz; i++)
        {
           if(str[i]>='a' && str[i]<='z')
           {
              if(mp[str[i]]==0)
              {
                mp[str[i]]++;
                cnt++;
              }
           }
        }
        cout<<cnt;
    return 0;
}