#include <iostream>

using namespace std;

int nwd (int a, int b)
{
    int c;

    if(a==0)
        return b;
    if(b==0)
        return a;
    if (a<b)
    {
        c=b;
        b=a;
        a=c;
    }

    while(a%b)
    {
        c=b;
        b=a%b;
        a=c;
        //cout<<b<<endl;
    }
    return b;
}

int main()
{
    int t,a,b,wynik;
    cin>>t;


    for(int i=0; i<t; i++)
    {
        cin>>a;
        cin>>b;
        wynik = nwd(a,b);
        cout<<wynik<<endl;
    }



    return 0;
}
