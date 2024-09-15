#include<bits/stdc++.h>
using namespace std;
#define N 1e6+5
#define     ll      long long int
vector<ll>v(N);
void solve()
{
    for(int i=1;i<N;i++)
    {
        for(int j=i;j<N;j+=i)
        {
            v[j]++;
        }
    }
}
int main()
{
    solve();
    ll t;
    cin>>t;

    while(t--)
    {
        ll x;cin>>x;
        cout<<v[x]<<endl;
    }
}
