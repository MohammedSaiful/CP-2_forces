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

    int n,num,cnt;
    cin>>n;
    vector <int> arr;
    for(int i=0; i<n; i++)
    {
        cin>>num;
        arr.push_back(num);
    }
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}