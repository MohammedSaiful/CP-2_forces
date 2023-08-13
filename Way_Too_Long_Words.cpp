#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w,i,t,n,cnt,siz;
    string str,st;
    cin>>t;

    while(t--)
    {
        cin>>str;
        siz=str.size();

        n=0;
        if(siz>10)
        {
            st[0]=str[0];
            st[1]=str[siz-1];
            n=siz-2;
            cout<<st[0]<<n<<st[1];

        }
        else
        {
            cout<<str;
        }
        cout<<"\n";
    }

    return 0;
}
