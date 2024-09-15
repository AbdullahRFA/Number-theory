#include<bits/stdc++.h>
#define ll      long long int
using namespace std;
void pw(ll b,ll p,ll m)
{
    ll res=1;
    while(p)
    {
        if(p%2==1)
        {
            res=(res*b)%m;
            p--;
        }
        else
        {
            b=(b*b)%m;
            p/=2;
        }
    }
    cout<<res;
}
int main()
{
    ll n;cin>>n;
    pw(8,n,10);
}
