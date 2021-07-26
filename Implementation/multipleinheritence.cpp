#include<bits/stdc++.h>
using namespace std;
class firstone{
public:
string s1="aaa";
void fn1()
{
    cout<<"first class er method";
}

};
class secondclass{
    public:
   int a=90;
    void fn2()
    { 
        cout<<"second class er method";
    }
};
class derivedclass:public secondclass, public firstone{

    public:
    int b=45;
    string s3="derived hoye asha";
};
int main()
{   
    derivedclass obj;
    obj.fn1();
    cout<<endl;
    obj.fn2();
    cout<<endl;
    cout<<obj.s1<<endl;
    cout<<obj.a<<endl;
    cout<<obj.b;
    return 0;
}