#include<bits/stdc++.h>
using namespace std;
const int N=100000;
int is_prime[N+5];
vector<int>prime;
void sieve()
{
is_prime[1]=is_prime[2]=0;
    for(int i=3;i*i<=N;i++)
    {
        if(is_prime[i]==0)
        {
            for(int j=i*i;j<=N;j+=i)
            {
                is_prime[j]=1;
            }
        }
    }
    prime.push_back(2);
    for(int i=3;i<=N;i+=2)
    {
        if(is_prime[i]==0)prime.push_back(i);
    }
}
int main()
{
    sieve();
    int n,k,count=0;
    cin>>n>>k;
    for(int i=0;prime[i]<=n;i++)
    {
        int x=prime[i]+prime[i+1]+1;
        if(is_prime[x]==0&&x<=n)count++;
    }
        if(count>=k)cout<<"YES";
        else cout<<"NO";
}
