#include <bits/stdc++.h>
using namespace std;

int main()
 {  
     int a[4];
     for(int i=0;i<4;i++)
     {
         cin>>a[i];
     }
     for(int j=0;j<4;j++)
     {
         cout<<a[j]<<" ";
     }
     cout<<endl;
     //int x=sizeof(a[0]);
     sort(a, a+4);
     cout<<"sorted array is:";
     for(int n=0;n<4;n++)
     {
         cout<<a[n]<<" ";
     }
     cout<<endl;
     cout<<"greatest in the input:"<<a[3];
    return 0;
}