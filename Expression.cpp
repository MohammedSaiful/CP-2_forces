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
    int a,b,c,n1,n2,n3,n4,n5,n6,ans=0;
    cin>>a>>b>>c;
    
    n1=a*b*c;
    n2=a+b+c;
    n3=a*(b+c);
    n4=(a+b)*c;
    n5=a+(b*c);
    n6=(a*b)+c;

    ans=n1;
    ans=max(ans,n2);
    ans=max(ans,n3);
    ans=max(ans,n4);
    ans=max(ans,n5);
    ans=max(ans,n6);
    
    cout<<ans;
       

    return 0;
}