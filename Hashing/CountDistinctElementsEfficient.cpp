#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void distinct(int arr[], int n)
{
    unordered_set<int> us;
    // unordered_set<int> us(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        us.insert(arr[i]);
    }
    cout<< us.size();
}


int main()
{
    int n=7;
    int arr[n]={1,2,1,1,2,4,5};
    distinct(arr,n);
    return 0;
}

// Time Complexity: Theta(n)
// Space Complexity: O(n)