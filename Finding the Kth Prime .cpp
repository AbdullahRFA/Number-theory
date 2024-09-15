#include<bits/stdc++.h>
using  namespace  std;
 #define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;

bool prime[90000001];
int n=90000000;
vector<int>v;
void sieve()
{
	for(int i=3;i*i<=n;i+=2)
	{
		if(prime[i]==false)
		{
			for(int j=i*i;j<=n;j+=i)
			{
				prime[j]=true;
			}
		}
	}
	v.push_back(2);
	for(int i=3;i<=n;i+=2)
	{
		if(prime[i]==false)v.push_back(i);
	}
}
int main()
{
	sieve();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<v[n-1]<<endl;
	}
	return 0;
}
