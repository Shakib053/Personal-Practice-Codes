#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*string a,b;
    cin>>a>>b;
    int x,y;
    x=a.size();
    y=b.size();
    cout<<x<<" "<<y<<endl;
    cout<<a+b<<endl;
    swap(a[0],b[0]);
    cout<<a<<" "<<b;
    return 0;*/
    /*int a[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    sort(a, a+3);
    cout<<a[2]<<" "<<"eh o maior\n";
    return 0;*/

   int a;
   int b;
   cin>>a;
   cin>>b;
   int c=(a*b);
   float x=(float)c/(float)12;
   //cout<<x<<" km/l\n";
   printf("%.3lf\n",x);
   
   return 0;
}