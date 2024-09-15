#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=5;
#define mod  1000000007
long long int a[N][N],I[N][N];
void mul(ll a[][N],ll b[][N],ll n)
{
    ll p[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            p[i][j]=0;
            for(int k=0; k<n; k++)
            {
                ll x=(a[i][k]*b[k][j])%mod;
                p[i][j]=(p[i][j]+x)%mod;
            }
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            a[i][j]=p[i][j];
        }
    }
}
void solve(ll p,ll q,ll c)
{
    a[0][0]=0;
    a[0][1]=a[1][0]=a[1][1]=1;
    I[0][0]=I[1][1]=1;
    I[0][1]=I[1][0]=0;
    c--;
    while(c)
    {
        if(c%2==1)
        {
            mul(I,a,2);
            c--;
        }
        else
        {
            mul(a,a,2);
            c/=2;
        }
    }
    ll ans=(p*I[0][1]+q*I[1][1])%mod;
    cout<<ans<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        solve(a,b,c);
    }
}
