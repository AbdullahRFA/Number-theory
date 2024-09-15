#include<bits/stdc++.h>
#define ll          long long int
using namespace std;
void primefact(ll n)
{
    ll count=0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                count++;
                n/=i;

            }
            cout<<i<<"^"<<count;
            if(n>1)
            cout<<",";
            count=0;
        }
    }
    if(n>1)cout<<n<<"^"<<"1";
}
int main()
{
        ll n;
        cin>>n;
        primefact(n);
}
