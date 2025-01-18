#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    for(int i = 0; i<arr.size(); i++)
    {
        arr.push_back(i);
    }
    for(int i = 1; i<arr.size(); i++)
    {
        if(arr[i]<arr[i+1])
        {
            cout<<"true";
        }
        else cout<<"false";
    }
    return 0;
}