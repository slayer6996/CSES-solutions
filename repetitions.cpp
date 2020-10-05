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

    string str;
    cin>>str;
    char last;
    long long count=0,lastamt=0;

    for(long long i=0; i<=str.length();i++)
    {
        last=str[i-1];
        if(str[i]!=last)
        {
            count=max(count, lastamt);
            lastamt=1;
        }
        else
            lastamt++;
    }
    count=max(count, lastamt);
    cout<<count;
    return 0;
}
