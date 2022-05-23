#include <bits/stdc++.h> 
using namespace std;

int numberofones(int n){
    int count=0;
    while(n){
        n= n & (n-1);
        count++;
    }
    return count;
}

bool isPower2(int n){
    if(n==0){
        return false;
    }
    return !(n & (n-1));
}

int main()
{
    cout<<isPower2(8)<<endl;
    cout<<numberofones(7)<<endl;
}