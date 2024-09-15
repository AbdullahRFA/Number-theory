#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector< int> a(n),b(n),c(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            c[i]=a[i];
        }
          int zero=0,one=0;
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            if(b[i]==0)zero++;
            else one++;
        }
        sort(c.begin(),c.end());
        //cout<<zero<<" "<<one<<endl;
        if(c==a)cout<<"YES"<<endl;
        else
        {
        if(zero>=1 && one>=1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }
    }
}
