#include<bits/stdc++.h>
using namespace std;
void printdiv(int n)
{
     for(int i=1;i*i<=n;i++)N
    {
        if(n%i==0)
        {cout<<i<<" " ;
            if(n/i!=i && n/i!=n)
            {
                cout<<(n/i)<<" ";
            }
        }
    }
    cout<<endl;
}
void sumOfdiv(int n)
{
    int sum=0;
    if(n==1)return ;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
            if(n/i!=i && n/i!=n)
            {
                sum+=(n/i);
            }
        }
    }
    if(sum==n)
    {cout<<n<<endl;
        printdiv(n);
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=n;i<=m;i++)
    {
        sumOfdiv(i);
    }
}
