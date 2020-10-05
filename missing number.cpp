#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "w", stdin);
    freopen("output.txt", "r", stdout);
    #endif

    long long n;
    cin>>n;
    long long sum;
    sum=0;
    long long missing;
    long long ar[n-1];

    for(int i=0;i<n-1;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }

    missing=(((n*n)+n)/2)-sum;
    cout<<missing;

}
