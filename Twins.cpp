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
    
    int n,x,t,num,cnt,sum;
    cin>>n;
    vector <int> v;

    sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
        sum+=x;
    }

    sort(v.begin(), v.end());
    sum=ceil(sum/2);

    cnt=num=0;
    for(int i=n-1; i>=0; i--)
    {
        num+=v[i];
        cnt++;
        if(sum<num)
        {
            break;
        }
    }
    cout<<cnt;

    return 0;
}