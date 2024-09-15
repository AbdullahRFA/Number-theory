#include<bits/stdc++.h>
using namespace std;
int power(int b,int p,int m)
{
    int ans=1;
    while(p)
    {
        if(p%2==1)
        {
            ans=(ans*b)%m;
            p--;
        }
        else
        {
            b=(b*b)%m;
            p/=2;
        }
    }
    return ans%m;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
    int a,b,m;      ///(a/b)%m
    cin>>a>>b>>m;       ///(a*b^-1)%m
    int x=power(b,m-2,m);///x=b^-1    ==      x=(b^m-2)%m
    cout<<(a*x)%m<<endl;///(a*x)%m

    }
}
