#include<bits/stdc++.h>
using namespace std;

// long long vsum(vector<long long> vect)          //to find sum of vectors
// {
//     return accumulate(vect.begin(), vect.end(), 0);
// }

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

    long long sum;
    sum=(n*(n+1)/2);  //sum up to n natural numbers

    if(sum%2!=0)    //checking if the sum is even
    {
        cout<<"NO\n";
        return 0;
    }
    else
        cout<<"YES\n";


    vector<long long> v1,v2;

    v1.push_back(n);
    long long i=n-1;
    while(i>0)
    {
        v2.push_back(i);
        i--;
        if(i==0)
            break;
        v2.push_back(i);
        i--;
         if(i==0)
            break;
        v1.push_back(i);
        i--;
         if(i==0)
            break;
        v1.push_back(i);
        i--;

    }

    long long s1,s2;

    s1=v1.size();   //determines number of elements in vectors
    s2=v2.size();

    cout<<s1<<"\n";

    for(int j=0;j<s1;j++)   //print vector
    {

        cout<<v1[j]<<" ";
    }
    cout<<"\n"<<s2<<"\n";
    for(int j=0;j<s2;j++)
    {
        cout<<v2[j]<<" ";
    }
    return 0;
}
