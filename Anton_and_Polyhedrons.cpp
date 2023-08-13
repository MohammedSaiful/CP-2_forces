#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define input freopen("input.txt", "r", stdin);
#define output freopen("output.txt", "w", stdout);
#define endl '\n';
typedef long long ll ;

void solve()
{
 
}

int main()
{
    boost; 
    int n,t,num,cnt;
    string str;
    cin>>n;
    cnt=0;
    for(int i=0; i<n; i++)
    {
        cin>>str;
        if('T'==str[0]) cnt+=4;
        else if('C'==str[0])cnt+=6;
        else if('O'==str[0])cnt+=8;
        else if('D'==str[0])cnt+=12;
        else if('I'==str[0])cnt+=20;
    }
    cout<<cnt;

    return 0;
}