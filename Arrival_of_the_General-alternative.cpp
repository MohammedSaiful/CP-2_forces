#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define input freopen("input.txt", "r", stdin);
#define output freopen("output.txt", "w", stdout);
#define endl '\n';
typedef long long ll;

int main()
{
    boost;
    int mx,mn,mini=0,maxi=0,n,temp,cnt,sub;
    cin>>n;
    cin>>mx;
    mn=mx;
    for(int i=1; i<n;i++)
    {
        cin>>temp;
        if(mn>=temp)
        {
            mn=temp;
            mini=i;
        }
        else if(mx<temp)
        {
            mx=temp;
            maxi=i;
        }
    }
    if(mini<maxi)
    {
        cout<<(n-mini-1)+maxi-1<<endl;
    }
    else
    {
        cout<<(n-mini-1)+maxi<<endl;
    }

    return 0;
}