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

int main()
{
    string wyraz;
    int dlugosc,C;
    int ilosc;
    string nowywyraz,nowyznak;
    cin>>C;

    for(int x=0; x<C; x++)
    {
        cin>>wyraz;
        dlugosc = wyraz.length();

        for(int i=0; i<dlugosc-2; i++)
        {
            if(wyraz[i]==wyraz[i+1]&&wyraz[i]==wyraz[i+2])
            {
                ilosc=1;
                int poczatek = i;
                while(wyraz[i]==wyraz[i+1])
                {
                    ilosc++;
                    i++;
                }
                nowyznak = wyraz[poczatek] + konwersja(ilosc);
                wyraz = wyraz.replace(poczatek,ilosc,nowyznak);

                dlugosc = wyraz.length();
                i=0;
            }
        }
        cout<<wyraz<<endl;
    }
    return 0;
}
