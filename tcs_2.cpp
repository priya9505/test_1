#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    //vector<int>:: iterator it;
    int a;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    for(auto &p : arr)
    {
        cout << p << " ";
    }
    cout << endl;
    //int size = arr.size();
    for(auto i = arr.begin(); i < arr.end(); ++i)
    {
        if(*i == 0)
        {
            arr.erase(i);
            i--;
        }
    }
    for(int i = arr.size(); i < n; i++)
    {
        arr.push_back(0);
    }
    for(auto &p : arr)
    {
        cout << p << " ";
    }
    
    cout << endl;

}