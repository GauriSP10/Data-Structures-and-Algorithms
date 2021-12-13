#include<iostream>
using namespace std;

int valIndex(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==i)
        {
            return i;
        }
    }
    return -1;
}


int main()
{
    int n=5;
    int arr[n]={2,2,2,5,8};
    cout<<valIndex(arr,n);
    return 0;
}