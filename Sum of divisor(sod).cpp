#include<bits/stdc++.h>
using namespace std;
set<int>s;
void SOD()
{
    int n;
    cin>>n;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            s.insert(i);
            s.insert(n/i);
        }
    }
    long long int sum=0;
    cout<<"Number of divisors : "<<s.size()<<"\nDivisors are :  ";
    for(auto x:s)
    {
        cout<<x<<" ";
        sum+=x;
    }
    cout<<endl<<"Sum of divisors is = "<<sum<<endl;
    s.clear();
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        SOD();
    }
}
