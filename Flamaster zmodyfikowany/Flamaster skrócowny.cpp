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
    string nowywyraz,nowyznak;
    //cin>>C;


    //for(int i=0; i<C; i++)

    cin>>wyraz;
    dlugosc = wyraz.length();
    for(int i=0; i<dlugosc-2; i++)
    {
        if(wyraz[i]==wyraz[i+1]&&wyraz[i]==wyraz[i+2])
        {
            iloscWystapien = obliczWystapieniaDanegoZnaku (wyraz, i);

            wyraz.replace(i, iloscWystapien,wyraz[i] + konwersja(iloscWystapien));
            dlugosc = wyraz.length();

        }
    }
    cout<<wyraz<<endl;

    return 0;
}
