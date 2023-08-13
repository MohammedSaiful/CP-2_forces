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
    int n,cnt,num;
    cin>>n;
    num=0;
    cnt=0;
    
        if(n>=100)
        {
            num=num+ n/100;
            n=n%100;
        }
        if(n>=20)
        {
            num=num+ n/20;
            n=n%20;
        }
        if(n>=10)
        {
            num=num+ n/10;
            n=n%10;
        }
        if(n>=5)
        {
            num=num+ n/5;
            n=n%5;
        }
    //cout<<cnt<<endl;
    cout<<num+n;

    return 0;
}