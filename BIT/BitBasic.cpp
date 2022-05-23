#include <bits/stdc++.h>
using namespace std;

int getBit(int n,int pos)
{
    return( n & (1<<pos) !=0 ); 
}
int setBit(int n , int pos){
    return( n | (1<<pos));
}
int clearBit(int n, int pos){
    return ( n & (~(1<<pos)));
}
int updateBit(int n, int pos,int val){
   n= clearBit(n,pos);
   return n | (val<<pos) ;
}

int main()
{
    cout<<getBit(8,2)<<endl;
    cout<<setBit(8,1)<<endl;
    cout<<clearBit(8,1)<<endl;
    cout<<updateBit(8,1,1)<<endl;
    cout<<updateBit(8,1,0)<<endl;
}