#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;


int main()
{    
    string s;
    cin>>s;
    int cn1=0;
    int cn2=0;
    int ans1=0;
    int ans2=0;
    int ans;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {   
            cn2=0;
            cn1++;
            ans1=max(ans1,cn1);
        }
        else{ 
            cn1=0;
            cn2++;
            ans2=max(ans2,cn2);
    
        }
        
        
        ans=max(ans1,ans2);
    }
    cout<<ans;
    return 0;
}