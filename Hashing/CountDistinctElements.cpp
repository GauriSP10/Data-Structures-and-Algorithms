#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int distinct(int arr[], int n)
{
    vector<int> temp(50,0);
    int count =0;
    for(int i=0; i<n; i++)
    {
        temp[arr[i]]++;
    }

    for(int i=0; i<temp.size(); i++)
    {
        if(temp[i]==1)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n=7;
    int arr[n]={1,2,1,1,2,4,5};
    cout<<distinct(arr,n);
    return 0;
}

// Time Complexity: Theta(n)
// Space Complexity: O(n)