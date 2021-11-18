#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int intersection(int arr1[], int arr2[], int n, int m)
{
    unordered_set<int> um(arr1,arr1+n);
    int res=0;
    for(int i=0; i<m; i++)
    {
        if(um.find(arr2[i])!=um.end())
        {
            res++;
            um.erase(arr2[i]);
        }
    }
    return res;
}


int main()
{
    int n=4;
    int m=4;
    int arr1[n]={2,3,4,5};
    int arr2[m]={2,3,4,1};
    cout<<intersection(arr1,arr2,n,m);
    return 0;
}