//multilevel inheritence
#include<bits/stdc++.h>
using namespace std;
class parent{
 public:
 int a;
 string b="ami dada";
 void f1()
 {
     cout<<"bonghsher mukh alokito korbe";
 }
};
class child:public parent{
    public:
    string c="ami baap";
    void fn()
    {
        cout<<"dada dadi mile amak banaise.mane parent banaise";
    }
};
class grandchild:public child{
public:
 int e=5;
 string f="ami nati";
};
int main()
{


    grandchild obj;
    cout<<obj.f<<" ."<<obj.c<<". "<<obj.b<<". "<<endl;
    obj.f1();
    cout<<endl;
    obj.fn();
    return 0;
}