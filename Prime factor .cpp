#include<bits/stdc++.h>
using namespace std;
void primefact()
{
    int count=0,n;
    cin>>n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                count++;
                n/=i;
            }
        cout<<i<<"^"<<count;
        if(n>1)cout<<",";
        count=0;
        }
    }
    if(n>1)cout<<n<<"^1"<<endl;
    else cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        primefact();
    }
}
