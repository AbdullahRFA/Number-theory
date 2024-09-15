#include<bits/stdc++.h>
using namespace std;
#define ll      long long int
bool prime(ll n)
{
    if(n<2)return false;
    else if(n<=3) return true;
    else if(n%2==0)return false;
    else{
        for(int i=3;i*i<=n;i+=2)
        {
            if(n%i==0)return false;
        }
    }
    return true;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {

    ll n;
    cin>>n;
    if(n==0)return 0;
    bool t=prime(n);
    if(t)cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    }
}
