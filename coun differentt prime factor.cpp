#include<bits/stdc++.h>
using namespace std;
#define ll      long long int
//void prifac(ll n)
//{
//    ll k=n;
//    map<int,int>m;
//    for(int i=2;i*i<=n;i++)
//    {
//        if(n%i==0)
//        {
//            while(n%i==0)
//            {
//                m[i]++;
//                n/=i;
//            }
//        }
//    }
//    int cnt=m.size();
//    if(n>1)cout<<k<<" : "<<cnt+1<<endl;
//    else
//        cout<<k<<" : "<<cnt<<endl;
//}
void prifac(ll n)
{
    ll count=0,k=n;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
            while(n%i==0)
            {
                n/=i;
            }
        }
    }

    if(n>1)cout<<k<<" : "<<count+1<<endl;
    else
        cout<<k<<" : "<<count<<endl;
}
int main()
{
    while(1)
    {
        ll n;
        cin>>n;
        if(n==0)return 0;
        prifac(n);
    }
}
