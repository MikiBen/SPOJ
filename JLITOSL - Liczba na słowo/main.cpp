#include <iostream>
#include <map>
using namespace std;

string tabelaLiczbZapisanychTekstem(int liczba)
{
    string liczbaZapisanaTekstem;
    map<int,string>listaLiczb;

    listaLiczb=
    {
        {1,  "jeden"},
        {2,  "dwa"},
        {3,  "trzy"},
        {4,  "cztery"},
        {5,  "piec"},
        {6,  "szesc"},
        {7,  "siedem"},
        {8,  "osiem"},
        {9,  "dziewiec"},
        {10,  "dziesiec"},
        {11,  "jedenascie"},
        {12,  "dwanascie"},
        {13,  "trzynascie"},
        {14,  "czternascie"},
        {15,  "pietnascie"},
        {16,  "szesnascie"},
        {17,  "siedemnascie"},
        {18,  "osiemnascie"},
        {19,  "dziewietnascie"},
        {20,  "dwadziescia"},
        {30,  "trzydziesci"},
        {40,  "czterdziesci"},
        {50,  "piecdziesiat"},
        {60,  "szescdziesiat"},
        {70,  "siedemdziesiat"},
        {80,  "osiemdziesiat"},
        {90,  "dziewiecdziesiat"},
        {100,  "sto"},
        {200,  "dwiescie"}
    };
    liczbaZapisanaTekstem = listaLiczb[liczba];
    return liczbaZapisanaTekstem;
}


string konwersjaLiczbyNaTekst(int liczbaDoZmianyZapisu)
{
    string zapisSetekLiczby, zapisLiczbyDoStu;
    int liczbaJednosci,liczbaSetek;

    if (liczbaDoZmianyZapisu>=100&&liczbaDoZmianyZapisu<300)
    {
        liczbaSetek = liczbaDoZmianyZapisu/100;
        zapisSetekLiczby = tabelaLiczbZapisanychTekstem(liczbaSetek*100)+ " ";
    }
    else if (liczbaDoZmianyZapisu>=300&&liczbaDoZmianyZapisu<500)
    {
        liczbaSetek = liczbaDoZmianyZapisu/100;
        zapisSetekLiczby = tabelaLiczbZapisanychTekstem(liczbaSetek)+"sta ";
    }
    else if (liczbaDoZmianyZapisu>=500&&liczbaDoZmianyZapisu<1000)
    {
        liczbaSetek = liczbaDoZmianyZapisu/100;
        zapisSetekLiczby = tabelaLiczbZapisanychTekstem(liczbaSetek)+"set ";
    }

    liczbaDoZmianyZapisu = liczbaDoZmianyZapisu%100;
    if(liczbaDoZmianyZapisu<20&&liczbaDoZmianyZapisu>0)
        zapisLiczbyDoStu = tabelaLiczbZapisanychTekstem(liczbaDoZmianyZapisu)+ " ";
    else if (liczbaDoZmianyZapisu>=20&&liczbaDoZmianyZapisu<100)
    {
        liczbaJednosci = liczbaDoZmianyZapisu%10;
        zapisLiczbyDoStu = tabelaLiczbZapisanychTekstem(liczbaDoZmianyZapisu-liczbaJednosci)+" "+ tabelaLiczbZapisanychTekstem(liczbaJednosci)+" ";
    }

    return zapisSetekLiczby + zapisLiczbyDoStu;

}
int main()
{
    long long int liczbaNaSlowo;
    string slownyZapisLiczby="";
    int liczbaTestow;

    cin>>liczbaTestow;

    for(int i=0; i<liczbaTestow; i++)
    {
        cin>>liczbaNaSlowo;

        if(liczbaNaSlowo>=1000000000000)
            slownyZapisLiczby = konwersjaLiczbyNaTekst(liczbaNaSlowo/1000000000000)  + "bln. " ;
        liczbaNaSlowo=liczbaNaSlowo%1000000000000;

        if(liczbaNaSlowo>=1000000000)
            slownyZapisLiczby = slownyZapisLiczby + konwersjaLiczbyNaTekst(liczbaNaSlowo/1000000000)  + "mld. " ;
        liczbaNaSlowo=liczbaNaSlowo%1000000000;

        if(liczbaNaSlowo>=1000000)
            slownyZapisLiczby = slownyZapisLiczby + konwersjaLiczbyNaTekst(liczbaNaSlowo/1000000)  + "mln. " ;
        liczbaNaSlowo=liczbaNaSlowo%1000000;

        if(liczbaNaSlowo>=1000)
            slownyZapisLiczby = slownyZapisLiczby + konwersjaLiczbyNaTekst(liczbaNaSlowo/1000)  + "tys. " ;

        liczbaNaSlowo=liczbaNaSlowo%1000;
        slownyZapisLiczby = slownyZapisLiczby + konwersjaLiczbyNaTekst(liczbaNaSlowo);

        cout<<slownyZapisLiczby<<endl;
        slownyZapisLiczby="";
    }

    return 0;
}
