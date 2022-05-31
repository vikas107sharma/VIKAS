#include<iostream>
using namespace std;

int main()
{
    int a[]={6,5,4,7,8};
    int i,j,current;

    for (i=1;i<5;i++)
    {
        current=a[i];
        for (j=i-1;j>=0;j--)
        {
            if(a[j]>current)
            {
                a[j+1]=a[j];
            }
            else
            break;
        }
        a[j+1]=current;
    }
    for (i=0;i<5;i++)
    cout << a[i] <<" ";

return 0;
}