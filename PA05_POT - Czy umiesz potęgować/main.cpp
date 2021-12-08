#include <iostream>
#include <sstream>

using namespace std;

int potegowanie(int a, int b)
{
    int wynik=1;
    for(int i=0; i<b; i++)
        wynik=wynik*a;

    wynik=wynik%10;
    return wynik;
}

int main()
{
    int a,b,D;

    cin>>D;
    for(int i=0; i<D; i++)
    {
        cin>>a;
        cin>>b;

        a=a%10;
        b=b%4;
        if(b==0)
            b=4;
        cout<<potegowanie(a,b)<<endl;
    }
    return 0;
}
