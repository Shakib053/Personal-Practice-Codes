
#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{   
    char a;
    cout<<"Enter the character if you want to start\n";
    cin>>a;
    char b;
    cout<<"Enter the character you want to end with\n";
    cin>>b;
    int n=(int)b-(int)a+1;
    for(int i=1; i <=n;i++)
    {
        for(int j=1;j<=i ;j++)
        {
            cout<<a<<" ";
           
        }
        a=a+1;
        cout<<endl;
        
    }
    return 0;

}
