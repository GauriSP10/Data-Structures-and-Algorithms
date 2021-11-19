#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sub_zero(int arr[], int n)
{
    unordered_set<int> us;
    us.insert(arr[0]);
    int sum=0;
    for(int i=1; i<n; i++)
    {
        sum = sum + arr[i];
        if(sum==0)
        {
           return true;
        }
        else
        {
            us.insert(arr[i]);
        }
    }

   return -1;
}

int main()
{
    int n=6;
    int arr[n]={1,-1,2,-7,-1,-6};
    cout<<sub_zero(arr,n);
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)