#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int T,n,k,sub,cnt;
    cin>>T;

    while(T--)
    {
        cin>>n;
        long long int arr[n+1];
        for(int i=1; i<n+1; i++)
        {
            cin>>arr[i];
        }
        arr[0]=cnt=sub=0;
        for(int j=2; j<=n; j++)
        {
            if(arr[j]<=arr[j+1])
            {
                cnt=(arr[j+1]-arr[j]);
                if(arr[j]-arr[j-1]<cnt)
                sub=(cnt/2)+1;
            }
            else
            {
                sub=0;
                //cout<<"kire"<<endl;
                break;
            }
        }
        cout<<sub<<endl;
    }
    return 0;
}

