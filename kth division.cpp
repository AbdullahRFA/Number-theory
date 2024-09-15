#include<bits/stdc++.h>
using namespace std;
#define ll      long long int
set<ll>s;
void countdivisor(ll n)
{
    for(ll i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            s.insert(i);
            s.insert(n/i);
        }
    }
}
int main()
{
    ll n,k;
    cin>>n>>k ;
    countdivisor(n);
    ll p=s.size();
    vector<ll>v;
    v.assign(s.begin(),s.end());
    if(k>p)cout<<"-1"<<endl;
    else
        cout<<v[k-1]<<endl;

    s.clear();
}

