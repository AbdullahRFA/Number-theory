#include<bits/stdc++.h>
using namespace std;
const int N=1e8;
vector<bool>prime(N, false);

void sieve()
{
    prime[0]=prime[1]=true;

    for(int i=2;i*i<=N;++i)
    {
        if(!prime[i])
        {
            for(int j=i*i;j<=N;j+=i)
            {
                prime[j]=true;
            }
        }
    }
}

void printprime()
{
    int count=0;
    for(int i=0;i<=N;++i)
    {
        if(!prime[i])
        {
            ++count;
            if(count%100==1)
            {
                cout<<i<<endl;
            }
        }
    }
}

int main()
{
    sieve();
    printprime();
    return 0;
}
