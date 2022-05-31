#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int>::iterator it = v.begin();
    cout << *it << " ";
    cout << *(it + 1) << " ";
    cout << endl;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;


    // iterator in pairs
    vector<pair<int, int>> v_p = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    vector<pair<int, int>>::iterator itr;
    for (itr = v_p.begin(); itr != v_p.end(); ++itr)
    {
        cout << (*itr).first << " "<<(*itr).second<<"   "; 
    }
    cout<<endl;

    // other method to print
    for (itr = v_p.begin(); itr != v_p.end(); ++itr)
    {
        cout << itr->first << " "<< itr->second<<"   "; 
    }

    return 0;
}