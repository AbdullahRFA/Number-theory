#include<bits/stdc++.h>
using namespace std;
#define ll          long long int
void solve()
{
    ll mod;
    string s;
    cin>>s>>mod;
    ll ans=0;
    for(int i=0; i<s.size(); i++)
    {
        ans=ans*10+(s[i]-'0');
        ans%=mod;
    }
    if(ans%mod==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
