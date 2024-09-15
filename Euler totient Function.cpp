#include<bits/stdc++.h>
using namespace std;
void phi(int n)
{
    int ans=n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)                  ///use to find co-prime from 1 to n
        {                                   /// co-prime between two number is 1.
            while(n%i==0)
            {
                n/=i;
            }
          //  ans*=(i-1);
            ans-=ans/i;
        }
    }
    if(n>1)
    {
       // ans*=(n-1);
        ans-=ans/n;
    }
    cout<<ans<<endl;
}
int main()
{
        /// 1 to n porjonto koto gula pair thakbe jader gcd 1 hobe
        while(1)
        {

    int n;
    cin>>n;
        phi(n);
        }
               ///brutforce                                             ///1,10=1       ///5,10=5
//    int cnt=0;                                     ///2,10=2       ///6,10=2
//    for(int i=1;i<=n;i++)                   //3,10=1      ///7,10=1
//    {                                                     ///4,10=2      ///8,10=2
//        if(__gcd(i,n)==1)cnt++;             ///9,10=1
//    }cout<<cnt<<endl;                          ///10,10=4
//

        ///Efficient Way
        ///ans=n*()
}
/*
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll totient(ll n)
{
	ll res=0;
	ll j;
	if (n==1) return 1;
    res=n;
    if (n%2==0)
    {
		res-=res/2;
		while (n%2==0) n/=2;
    }
    for (j=3; j*j<=n; j+=2)
	{
		if (n%j==0)
		{
			res-=res/j;
			while (n%j==0) n/=j;
		}
	}
	if (n>1) res-=res/n;
	return res;
}
int main()
{
    int n;
    while(scanf("%d",&n)&&n)
    {
        cout << totient(n) << endl;
    }
}

*/
