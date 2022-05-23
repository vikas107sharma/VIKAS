#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int a[]={2,1,2,4,4,5,5,6,6};
    int temp=0;
    for(int i=0;i<9;i++){
        temp=temp^a[i]; 
    }
    cout<<temp;

    return 0;
}