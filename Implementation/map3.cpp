#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;

//ekta fixed valuen/position theke last porjonto print kora
int main()
{  
     
    int n;
    cin>>n;
    map<int,string>ss;
    while(n--)
    {
        int a;
        string b;
        cin>>a>>b;
        ss.insert({a,b});
    }
    cout<<"kon value theke sesh porjonto dekhaite chaw oita daw"<<endl;
    int c;
    cin>>c;
    map<int ,string>:: iterator i;
    //i=ss.find(c);
    for(auto i=ss.find(c);i!=ss.end();i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    return 0;
}