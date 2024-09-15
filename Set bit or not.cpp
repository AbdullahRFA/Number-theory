#include<bits/stdc++.h>
using namespace std;
void printBinary(int num)
{
    for(int i=10;i>=0;i--)
    {
        cout<<((num>>i)& 1);
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a=n;
    printBinary(n);
    int k;cin>>k;
    if(a & (1<<k)!=0)cout<<"Set bit"<<endl;
    else
        cout<<"Not set bit"<<endl;
}
