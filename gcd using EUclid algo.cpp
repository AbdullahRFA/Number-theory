#include<bits/stdc++.h>
using namespace std;
#define ll      long long int
ll gcd(ll a,ll b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
int main()
{
    ll t;cin>>t;
    while(t--)
    {
    ll a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;

    }
}
