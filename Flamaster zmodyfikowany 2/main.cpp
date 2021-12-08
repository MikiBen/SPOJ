#include <iostream>
#include <sstream>
using namespace std;

string konwersja(int a)
{
    ostringstream ss;
    ss << a;
    string str = ss.str();
    return str;
}

int obliczWystapieniaDanegoZnaku(string wyraz, char pozycjaZnaku)
{
    int iloscWystapien = 1;
    if(wyraz.length() > pozycjaZnaku)
    {

        while (wyraz[pozycjaZnaku] == wyraz[pozycjaZnaku + 1])
        {
            iloscWystapien++;
            pozycjaZnaku++;
        }
    }
    else iloscWystapien = 0;

    return iloscWystapien;
}

int main()
{
    string wyraz;
    int dlugosc,iloscWystapien;
    int iloscZnakow;

    cin>>iloscZnakow;
    cin>>wyraz;
    dlugosc = wyraz.length();

    for(int i=0; i<dlugosc-iloscZnakow+1; i++)
    {

        iloscWystapien = obliczWystapieniaDanegoZnaku (wyraz, i);

        if(iloscZnakow==1)
        {
            wyraz.replace(i, iloscWystapien,konwersja(iloscWystapien));
            dlugosc = wyraz.length();
        }
        else if(iloscZnakow<=iloscWystapien)
        {
            wyraz.replace(i, iloscWystapien,wyraz[i] + konwersja(iloscWystapien));
            dlugosc = wyraz.length();

        }

    }
    cout<<wyraz<<endl;

    return 0;
}


