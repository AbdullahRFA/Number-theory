#include<bits/stdc++.h>
using namespace std;
int ara[100000];
void sieve(vector<int>&v)
{
    for(int i=2;i*i<=100000;i++)
    {
        if(ara[i]==0)
        {
            for(int j=i*i;j<=100000;j+=i)
            {
                ara[j]=1;
            }
        }
    }
    for(int i=2;i<=100000;i++)
    {
        if(ara[i]==0)v.push_back(i);
    }
//     for(int i=0;i<=10;i++)
//    {
//        cout<<v[i]<<" ";
//    }
}
void segmentSieve(int l,int r,vector<int>v)
{
    if(l==1)l+=1;
    int mx=r-l+1;
    int a[mx+1];
    for(int i=0;i<mx;i++)a[i]=0;
    for(auto p:v)
    {
        if(p*p<=r)
        {
            int i=(l/p)*p;
            if(i<l)i+=p;
            for(;i<=r;i+=p)
            {
                if(i!=p)
                {
                    a[i-l]=1;
                }
            }
        }
    }
    for(int i=0;i<mx;i++)
    {
        if(a[i]==0)
        {
            cout<<l+i<<endl;
        }
    }
}
int main()
{
vector<int>v;
    sieve(v);
    int t;
    cin>>t;
    while(t--)
    {
    int l,r;
    cin>>l>>r;
    segmentSieve(l,r,v);
        cout<<endl;
    }
}
