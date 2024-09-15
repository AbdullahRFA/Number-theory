#include<bits/stdc++.h>
#define ll  long long int
using namespace std;
vector<ll>v[9000005];
void divisor()
{
    for(int i=1;i<=9000005;i++)
    {
        for(int j=i;j<=9000005;j+=i)
        {
            v[j].push_back(i);
        }
    }
}
int main()
{
    divisor();
    ll t;cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<"Number of divisor : "<<v[n].size()<<endl;
        cout<<"Divisors are : ";
        for(auto x:v[n])cout<<x<<" ";
        cout<<endl;
    }
}
