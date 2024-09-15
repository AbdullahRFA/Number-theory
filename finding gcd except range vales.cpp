#include<bits/stdc++.h>
using namespace std;
#define ll      long long int
ll getgcd(ll a,ll b)
{
    if (b==0)return a;
    return getgcd(b,a%b);
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        ll a[n+2],pre[n+2],post[n+2];
        for(ll i=1;i<=n;i++)cin>>a[i];
        pre[0]=0;
        for(int i=1;i<=n;i++)pre[i]=__gcd(pre[i-1],a[i]);
        post[n+1]=0;
        for(ll i=n;i>=1;i--)post[i]=__gcd(post[i+1],a[i]);
        ll ans;
        while(q--)
        {
            ll l,r;
            cin>>l>>r;
            ans=__gcd(pre[l-1],post[r+1]);
            cout<<ans<<endl;
        }
        }
    }

