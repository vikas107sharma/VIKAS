#include<iostream>
using namespace std;

int main()
{
    int a[]={6,5,4,8,7};
    int i,j,c;
    for (i=0;i<5;i++)
     {
         for(j=0;j<5;j++)
         {
             if(a[j]>a[j+1])
             {
             c=a[j];
             a[j]=a[j+1];
             a[j+1]=c;
             }
         }
     }
     for (i=0;i<5;i++)
    cout << a[i];
     return 0;
}