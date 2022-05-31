#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int hsh[N];
 
int main()
{
    long long n; cin>>n; long long a[n];
    hsh[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        hsh[i]=hsh[i-1]+a[i];
    }
    int t; cin>>t;
    while (t--)
    {
        int a,b; cin>>a>>b;
        cout<<hsh[b]-hsh[a-1];
    }
    
return 0;
}