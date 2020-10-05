#include<bits/stdc++.h>
using namespace std;


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin>>n;
    long long ans=1;

    for(long long i=0;i<n;i++)
    {
        ans=ans*2%((int)1e9+7);
    }
    cout<<ans;
}
