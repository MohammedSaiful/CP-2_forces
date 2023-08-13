#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t, n, siz, sub, cnt;
    cin >> n;
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cnt=sub=1;
    siz=n-1;
    for( int i=1; i<=siz; i++)
    {
        if(arr[i-1]!=arr[i])
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
