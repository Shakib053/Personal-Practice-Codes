#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;


int main()
{   
    cout<<"koita element map e thakbe total oita daw"<<endl;
    int n;
    cin>>n;
    map<int ,string>s;
    cout<<"ebar element input daw"<<endl;
    while(n--)
    {
        int a;
        string b;
        cin>>a>>b;
        s.insert({a,b}); //input nicchi
    }  
    map<int,string> :: iterator i;
    for(i=s.begin();i!=s.end();i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    //user ekta integer value dibe oita search korbo
    cout<<"kon element search korba ota likho"<<endl;
    int c;
    cin>>c;
    map<int,string> :: iterator it;
    it=s.find(c);
    if(it==s.end())
    {
        cout<<"mil nai"<<endl;
    }
    else
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    // ebar amra ekta value delete korbo map theke
    //map<int,string>:: iterator it1;
    cout<<"kon index delete korba oita likho"<<endl;
    int d;
    cin>>d;
    s.erase(d);
    cout<<"erase korar pore ja thake"<<endl;
    for(map<int,string>::iterator i=s.begin();i!=s.end();i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    return 0;
}