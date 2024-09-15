#include<bits/stdc++.h>
using namespace std;
#define ll      long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        //cout<<"YES"<<endl;
        ll k=a*b;
        set<ll>s;
        s.insert(a);
        s.insert(k);
        s.insert(k+a);
        if(s.size()==3)
        {
            cout<<"YES"<<endl;
        cout<<a<<" "<<k<<" "<<k+a<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
