
#include<bits/stdc++.h>
using namespace std;
int main() {

    int t;

    cin>>t;

    while(t--){

        int n;

        cin>>n;

        if(n%6==1)

        {

            n=n+11;

            if(n%12==6)

            n=n-12;

            cout<<n<<" "<<"WS"<<endl;

            continue;

        }

        if(n%6==2)

        {

            n=n+9;

            if(n%12==5)

            n=n-12;

            cout<<n<<" "<<"MS"<<endl;continue;

        }

        if(n%6==3)

        {

            n=n+7;

            if(n%12==4)

            n=n-12;

            cout<<n<<" "<<"AS"<<endl;continue;

        }

        if(n%6==4)

        {

            n=n+5;

            if(n%12==3)

            n=n-12;

            cout<<n<<" "<<"AS"<<endl;continue;

        }

        if(n%6==5)

        {

            n=n+3;

            if(n%12==2)

            n=n-12;

            cout<<n<<" "<<"MS"<<endl;continue;

        }

        if(n%6==0)

        {

            n=n+1;

            if(n%12==1)

            n=n-12;

            cout<<n<<" "<<"WS"<<endl;continue;

        }

        cout<<endl;

    }

    return 0;

}

 




