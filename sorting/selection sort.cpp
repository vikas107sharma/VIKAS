#include <iostream>
using namespace std;

int main()
{
    int i;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
        int j,c;
     for (i=0;i<n-1;i++)
     {
              for (j=i+1;j<n;j++)
              {
                  if(a[i]>a[j])
                  {
                      c=a[i];
                      a[i]=a[j];
                      a[j]=c;
                  }
              }
     }

     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}