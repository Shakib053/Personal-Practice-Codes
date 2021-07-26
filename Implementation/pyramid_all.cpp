#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define pi 3.1415
#define ll long long
using namespace std;
int main()
{   
   
    int n;
    cin>>n;
    cout<<"Number Pyramid"<<endl;
    for(int i=0;i<n;i++)
    {  
        int x=1;
        for(int j=0;j<i+1;j++)
        {
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }   
    //reverse
    cout<<"Reverse\n";
     for(int i=0;i<n;i++)
    {  
        int x=1;
        for(int j=i;j<n;j++)
        {
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }  
     
    

    cout<<"Character Pyramid"<<endl;
//  int n;
  //  cin>>n;
     for(int i=0;i<n;i++)
    {  
        char x='A';
        for(int j=0;j<i+1;j++)
        {
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }  
    
    //Reverse of this
    
    cout<<"Reverse\n";
    for(int i=0;i<n;i++)
    {  
        char x='A';
       for(int j=i;j<n;j++)
       {
           cout<<x<<" ";
           x++;
       }
       cout<<endl;
    }
     


    return 0;
}
