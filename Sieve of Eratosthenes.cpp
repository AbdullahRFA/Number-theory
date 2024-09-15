#include<bits/stdc++.h>
using namespace std;
#define ll      long long int
long long int ara[10000]={0};

void sieve()
{
    for(int i=2;i*i<=10000;i++)
    {
        if(ara[i]==0)
        {
            for(int j=i*i;j<=10000;j+=i)
            {
                ara[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(ara[i]==0)cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
    sieve();
    ll n;cin>>n;
    if(ara[n]==0)cout<<"Prime"<<endl;
    else cout<<"NOT Prime"<<endl;

}
