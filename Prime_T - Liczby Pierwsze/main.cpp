#include <iostream>
#include <math.h>

using namespace std;

string sprawdzenieLiczbyPierwszej(int liczba)
{

    string rezultat = "TAK";
    if(liczba==1)
        rezultat = "NIE";
    else
    {
        for(int i=2; i <= sqrt(liczba); i++)
            if(liczba % i ==0)
            {
                rezultat = "NIE";
            }
    }

    return rezultat;
}

int main()
{
    int liczba, liczbaTestow;
    cin>>liczbaTestow;

    for(int i=0; i<liczbaTestow; i++)
    {
        cin>>liczba;
        cout<<sprawdzenieLiczbyPierwszej (liczba)<<endl;

    }

    return 0;
}
