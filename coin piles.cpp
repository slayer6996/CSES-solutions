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

    long long t,a,b;
    cin>>t;
    for(long long i=0;i<t;i++)
    {
        cin>>a>>b;
        if((a+b)%3==0 && 2*a>=b && 2*b>=a)
        {
            cout<<"YES\n";
            continue;
        }
        else
            cout<<"NO\n";
    }
        return 0;
}
