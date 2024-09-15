#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
int main()
{
    ll ara[100];
    ara[0]=1;
    ll k=1;
    for(int i=1;i<100;i++)
    {
        ara[i]=i*k;
        k=ara[i];
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        cout<<ara[n]<<endl;
    }
}
