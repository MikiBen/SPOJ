#include <iostream>

using namespace std;

void przesuniecie(string wyraz, int prawo)
{
    int dlugosc;
    int litera;
    dlugosc = wyraz.length();
    for(int i=0; i<dlugosc; i++)
    {
        if(wyraz[i]!=' ')
        {
            if(wyraz[i]>64)
            {
                litera = wyraz[i]-prawo;
                if (litera<65)
                    litera = 90 + litera -64;
                cout<<(char)litera;
            }
        }
        else cout<<" ";
    }
}

int sprawdzenieLiczby(string wyraz)
{
    int dlugosc,liczba=0;
    dlugosc = wyraz.length();

    if(wyraz[2]<58&&wyraz[2]>47)
        return liczba;
    if(wyraz[1]<58&&wyraz[1]>47)
        liczba = wyraz[1]-48;
    if(wyraz[0]<58&&wyraz[0]>47)
        liczba = 10*(wyraz[0]-48)+liczba;
    return liczba;

}
int main()
{
    string wyraz;
    int liczba;
    do
    {
        cout<<"Podaj kod ";
        getline(cin,wyraz);
        liczba = sprawdzenieLiczby( wyraz);
    }
    while(liczba<1||liczba>25);
    przesuniecie(wyraz, liczba);
    return 0;
}
