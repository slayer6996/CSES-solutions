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

    int trailingzeros=0;
    long long n;
    cin>>n;

    for(long long i=5;i<=n;i*=5)
    {
        trailingzeros+=n/i;
    }
    cout<<trailingzeros;
    return 0;
}
