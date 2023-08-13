#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t,n, siz,sub,cnt;
    cin>>n>>t;
    char str[n];
    while(t--)
    {
        cin>>str;
        for(int i=0; i<n-1; i++)
        {
            if(str[i]=='B' && str[i+1]=='G')
            {
                swap(str[i],str[i+1]);
                i++;
                //break;
            }
        }
    }
    cout<<str<<endl;
    return 0;
}
