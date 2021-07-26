#include <iostream>
using namespace std;
//basic pointer
int main() {
    int v;
    cin>>v;
    int*a=&v;
    cout<<"value is :"<<v<<endl;
    cout<<"pointer is:"<<a<<endl;
    int z=(*a);
    cout<<z;
    cout<<(*a)+2;
    return 0;
}
//jug biyog
/*int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    cout<<a+b<<endl;
    cout<<abs(a-b);
    return 0;
}*/
//nicher ta pointer diye
void update(int *a, int *b) {
    int aa=*a;
    *a=*a+*b;
    *b=abs(aa-*b);
}

/*int main() {
    int a,b;
    scanf("%d %d", &a ,&b);
    update(&a,&b);
    printf("%d\n%d", a,b);
    return 0;
} */