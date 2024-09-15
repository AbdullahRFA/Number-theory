#include<bits/stdc++.h>
using namespace std;
#define ll      long long int
#define N   50000
vector<ll>v(N+6),prime,res;
void sieve()
{
    prime.push_back(2);
    for(ll i=3; i*i<=N; i++)
    {
        if(v[i]==0)
        {
            prime.push_back(i);
            for(ll j=i*i; j<=N; j+=i)
            {
                v[j]=1;
            }
        }
    }
}
void primeFactor(ll n)
{
    cout<<"1";
    for(ll i=0; prime[i]*prime[i]<=n; i++)
    {
        while(n%prime[i]==0)
        {
            //res.push_back(prime[i]);
            cout<<" x "<<prime[i];
            n/=prime[i];
        }
    }
    if(n>1)cout<<" x "<<n<<endl;
    else cout<<endl;
//    for(ll i=0; i<res.size(); i++)
//    {
//        cout<<res[i];
//        if(i!=res.size()-1)
//            cout<<" x ";
//    }
//    cout<<endl;
//    res.clear();
}
int main()
{
    sieve();
    ll n;
    while(cin>>n)
    {
        if(n==1)cout<<"1"<<endl;
        else
        {
            primeFactor(n);
        }
    }
}
