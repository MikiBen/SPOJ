#include <iostream>

using namespace std;

int main()
{
    double A,B,C,delta;
    int x=0;
    string wyraz= "";
    while(cin>>A)
    {
        cin>>B;
        cin>>C;
        delta = B*B-4*A*C;

        if(delta>0)
            wyraz = wyraz + "A";
        else if (delta==0)
           wyraz = wyraz + "B";
        else
        wyraz = wyraz + "C";
        x++;

    }

    for(int i=0;i<x;i++)
    {
                if(wyraz[i]=='A')
            cout<<"2"<<endl;
        else if ((wyraz[i]=='B'))
           cout<<"1"<<endl;
        else
        cout<<"0"<<endl;
    }



    return 0;
}
