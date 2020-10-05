#include<bits/stdc++.h>
using namespace std;



int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin>>n;
    string str;
    if(n<=3 && n>1)
    {
        cout<<"NO SOLUTION";
        return 0;
    }
    for(long long i=1;i<=n;i++)
    {
        if(i%2==0)
            cout<<i<<" ";
        else
            str+= to_string(i)+ " ";
    }
    cout<<str;
    return 0;
}
