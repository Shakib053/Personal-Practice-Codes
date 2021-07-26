//ekta class create kora and multiple attribute show korano
//w3 school theke
#include<bits/stdc++.h>
using namespace std;
class myclass{
    public:
    void print() //class er vetore method declare+body korlam
    {
        cout<<"chakri to pabo na\n";
    }
    void print2();//class er vetore declare kore baire body
    int num;
    string s;
};
void myclass::print2()
 { 
   cout<<"prochur porashuna kora lagbe";
 }
class car{
    public:
    int speed(int maxspeed);
};
 int car::speed(int maxspeed)
{
    return maxspeed;
}
 class vehical{   //parent class declare korlam
     public:
     string brand="audi";
 };
 class cars:public vehical{
      
      public:

      string model="ami";
      int price=50000000;

 };

int main()
{   


    cars v1;//derived class ba child class er object create kora lagbe
    cout<<v1.model<<" "<<v1.brand<<" "<<"kinbo"<<" "<<v1.price<<"tk "<<"diye"<<endl;
    
    myclass method;
    method.print();
    myclass obj;
    obj.num=15;
    obj.s="kisu ei pari na";
    myclass obj1;
    obj1.num=25;
    obj1.s="hotash ami";
    myclass obj2;
    obj2.num=65;
    obj2.s="mentally drained";
    cout<<obj.num<<endl;
    cout<<obj.s<<endl;
    cout<<obj1.num<<endl;
    cout<<obj1.s<<endl;
    cout<<obj2.num<<endl;
    cout<<obj2.s<<endl;
    myclass obj5;
    obj5.print();
    car aa;
    cout<<aa.speed(200)<<endl;
    return 0;
}