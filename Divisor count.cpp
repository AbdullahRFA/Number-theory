#include<bits/stdc++.h>
using namespace std;
#define ll      long long int
set<ll>s;
void countdivisor(ll n)
{
    for(ll i=1;i<=sqrt(n);i++)
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
    ll n;
    cin>>n;
    countdivisor(n);
    cout<<s.size()<<endl;
    for(auto it:s)cout<<it<<" ";
    cout<<endl;
}
