#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w,i;
    cin>>w;
    if(w>2)
    {
        if(w%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
