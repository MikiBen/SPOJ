#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

string intNaString (int a)
{
    ostringstream ss;
    ss << a;
    string str = ss.str();
    return str;
}
string odwrocenie(string wyraz, int dlugosc)
{
    string wyraz2;
    wyraz2=wyraz;
    int j;
    j=dlugosc-1;
    for(int i=0; i<dlugosc; i++)
    {
        wyraz2[i]=wyraz[j];
        j--;
    }
    return wyraz2;
}

int stringNaInt(string liczba)
{
    int wynik;
    wynik = atoi(liczba.c_str());
    return wynik;
}

int main()
{
    int n,dlugosc,liczba1,liczba2,t;
    int iloscProb;
    string wyraz,odwroconyWyraz;

    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>n;
        iloscProb=0;
                  wyraz = intNaString(n);
        dlugosc = wyraz.length();
        odwroconyWyraz=odwrocenie(wyraz,dlugosc);


        while(wyraz!=odwroconyWyraz)
        {
            liczba1 =  stringNaInt(wyraz);
            liczba2 =  stringNaInt(odwroconyWyraz);
            n =  liczba1+liczba2;

            wyraz = intNaString(n);
            dlugosc = wyraz.length();
            odwroconyWyraz=odwrocenie(wyraz,dlugosc);
            iloscProb++;
        }
        cout<<n<<" "<<iloscProb<<endl;
    }




    return 0;
}
