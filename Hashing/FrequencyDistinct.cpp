#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void distinct_freq(int arr[], int n)
{
    unordered_map<int, int> um;
    for(int i=0; i<n; i++)
    {
        um[arr[i]]++;
    }

    for(auto x= um.begin(); x!=um.end(); x++)
    {
        cout<<x->first<<" "<<x->second<<"\n";
    }
}


int main()
{
    int n=7;
    int arr[n]={1,2,1,1,2,4,5};
    distinct_freq(arr,n);
    return 0;
}
