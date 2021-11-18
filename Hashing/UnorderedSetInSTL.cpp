#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Non contiguous memory allocation.
void un_se(unordered_set<int> us)
{
    for(int x: us)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    
    // .begin() returns a temporary pointer.
    // .end() returns a pointer to the end+1 of the set.
    for(auto i=us.begin(); i!=us.end(); i++)
    {
    cout<<&i<<" ";  
    cout<<*i<<" ";
    }
    cout<<"\n";
    cout<<us.size()<<"\n";
    //us.clear();

    if(us.find(10)==us.end())
    {
        cout<<"Not Found"<<"\n";
    }
    else{
        cout<<"Found It"<<"\n";
    }

    auto it =  us.find(5);
    us.erase(*it);
    cout<<us.size();
}

int main()
{
    unordered_set<int> us;
    us.insert(5);
    us.insert(10);
    us.insert(15);
    us.insert(5); // Ignored.
    un_se(us);
    return 0;
}

// Time Complecity of all the above operations: O(1)