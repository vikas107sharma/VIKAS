#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    } // 1 2 3

    cout << endl;

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    } // 1 2 3

    cout << endl;

    for (auto &element : v)
    {
        element++;  // agr changes krna hai to reference bhejna hai
    } // 2 3 4
    
    for (auto element : v)
    {
        cout << element << " ";
    } // 2 3 4

    v.pop_back(); // 1 2

    cout << endl;

    vector<int> v2(3, 50);
    for (auto element : v2)
    {
        cout << element << " ";
    }  // 50 50 50

    swap(v,v2);

    cout<<endl;
    for( auto element :v){
        cout<<element<<" ";
    }  // 50 50 50

    cout<<endl;
    for( auto element : v2){  // auto automatically detect datatype
        cout<<element<<" ";
    }  // 1 2 3 

    sort(v.begin(),v.end());
    
}