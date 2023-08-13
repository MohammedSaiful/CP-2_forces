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
    

    int n,siz,num=2000,num1=0,cmp=1000,cnt=0,sub;
    cin>>n;
    int arr[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        num=min(num,arr[i]);
        num1=max(num1,arr[i]);
    }
    for(int i=1; i<=n; i++)
    {
        if(num1==arr[i])
        {
            cmp=min(i,cmp);
        }
        if(num==arr[i])
        {
            cnt=max(i,cnt);
        }
    }
    
    if(cnt<cmp)
    sub=cmp-1+(n-cnt)-1;
    else
    sub=cmp-1+(n-cnt);
    cout<<sub;

    return 0;
}