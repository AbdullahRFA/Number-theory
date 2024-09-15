#include<bits/stdc++.h>
using namespace std;
#define ll      long long int
const int N=101;
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
                ll x=(a[i][k]*b[k][j]);
                p[i][j]=(p[i][j]+x);
            }
        }
    }
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<n; j++)
        {
            a[i][j]=p[i][j];
        }
    }
}
void power(ll a[][N],ll n,ll p)
{
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<n; j++)
        {
            if(i==j)I[i][j]=1;
            else
                I[i][j]=0;
        }
    }
    while(p)
    {
        if(p%2!=0)
        {
            mul(I,a,n);
            p--;
        }
        else
        {
            mul(a,a,n);
            p/=2;
        }
    }
     for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            a[i][j]=I[i][j];
        }
    }
}
int main()
{
    ll n,p;
    cin>>n>>p;
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    power(a,n,p);
 for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
