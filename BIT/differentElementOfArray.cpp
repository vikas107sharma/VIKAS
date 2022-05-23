#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int a[]={1,2,2,1,4,12};
    int XOR = 0;
    for(int i=0;i<6;i++){
        XOR = XOR ^ a[i];
    }
    int rtmtsb= XOR & ~(XOR-1);
    int x=0,y=0;
    for(int i=0;i<6;i++){
        if( rtmtsb & a[i] ){
            x = x ^ a[i];
        }
        else{
            y = y ^ a[i];
        }
    }
    cout<<x<<" "<<y;
}