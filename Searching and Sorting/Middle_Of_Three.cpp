#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int middle(int a, int b, int c)
{
    vector<int> res;
    res.push_back(a);
    res.push_back(b);
    res.push_back(c);
    sort(res.begin(), res.end());
    return res[1];
}


int main()
{
    int a = 123;
    int b =567; 
    int c =809;
    cout<<middle(a,b,c);
    return 0;
}