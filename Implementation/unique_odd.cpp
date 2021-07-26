//A program that finds the unqiue odd element of an array

#include<bits/stdc++.h>
#include<map>
#include<iterator>
#include<set>
#define pi 3.1415
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    set<int> s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        s.insert(a[i]);

    }
    set<int > :: iterator i;
    for(i=s.begin();i!=s.end();i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}
