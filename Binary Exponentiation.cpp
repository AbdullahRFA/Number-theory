#include<bits/stdc++.h>
using namespace std;
#define ll      long long int
#define mod         1000000007
ll power(ll b,ll p)
{
    ll res=1;
    while(p>0)
    {
        if(p%2!=0)
        {
            res=(res*b)%mod;
            p--;
        }
        else
        {
            b=(b*b)%mod;
            p/=2;
        }
    }
    return res;
}
int main()
{
    ll b,p;
    cin>>b>>p;
  cout<<  power(b,p)<<endl;
}
