#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define input freopen("input.txt", "r", stdin);
#define output freopen("output.txt", "w", stdout);
#define endl '\n' ;
typedef long long ll ;

int main()
{
    boost;
    int k,l,m,n,d,cnt=0;
    cin>>k>>l>>m>>n>>d;
    for(int i=1; i<=d; i++)
    {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0) cnt++;
    }
    cout<<cnt;
    return 0;
}