#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define input freopen("input.txt", "r", stdin);
#define output freopen("output.txt", "w", stdout);
#define endl '\n';
typedef long long ll ;


int main()
{
    boost;
    string str;
    cin>>str;
    int siz, n, cnt,num;

    siz=str.size();
    cnt=0;
    for(int i=0; i<siz; i++)
    {
        if('H'==str[i]) 
        {
            cout<<"YES";
            cnt=1;
            break;
        }
        else if('Q'==str[i])
        {
            cout<<"YES";
            cnt=1;
            break;
        }
        else if('9'==str[i]) 
        {
            cout<<"YES";
            cnt=1;
            break;
        }
    }
    if(cnt==0) cout<<"NO";
    return 0;
}