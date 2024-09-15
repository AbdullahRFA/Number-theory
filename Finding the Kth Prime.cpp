#include<bits/stdc++.h>
using namespace std;
bool isprime[100000005];
vector <int> v;
int main()
{
    for(int i=3; i<=10000; i+=2)
    {
        if(isprime[i]==0)
        {
            for(int j=i*i; j<=100000000; j+=i+i)
            {
                isprime[j]=1;
            }
        }
    }
    v.push_back(2);
    for(int i=3; i<=100000000; i+=2)
        if(isprime[i]==0)
            v.push_back(i);

    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        cout<<v[n-1]<<endl;
    }
}
