#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;


int main()
{   
    map<int, string>student;
    student[200]="xxx";
    student[300]="yyy";
    student[3001]="aaa";
    student[190]="aaaaaa";
    //cout<<student[190];
    for(map<int,string>::iterator i=student.begin();i!=student.end();i++)
    {
        cout<<(*i).first<<":"<<(*i).second<<endl;
        //cout<<i->first<<":"<<i->second<<endl; same kaaj ei kore '->' and '*.' same kaj kore
    }
    cout<<"ebar reverse order e print korbo"<<endl;
    for(map<int,string>::reverse_iterator i=student.rbegin();i!=student.rend();i++)
    {
        cout<<i->first<<":"<<i->second<<endl;
    }

    return 0;
}