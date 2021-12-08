#include <iostream>
#include <map>

using namespace std;

int liczbyRzymskie (char liczbaRzymska)
{

    map<char,int>listaLiczbRzymskich;

    listaLiczbRzymskich=
    {
        {'I',  1},
        {'V',  5},
        {'X',  10},
        {'L',  50},
        {'C',  100},
        {'D',  500},
        {'M',  1000}
    };
    return listaLiczbRzymskich[liczbaRzymska];
}

int konwersjaNaLiczbeArabska(string liczbaRzymska)
{
    int liczba=0,dlugoscLiczbyRzymskiej;
    int *tablicaTymczasowa;
    dlugoscLiczbyRzymskiej = liczbaRzymska.length();
    tablicaTymczasowa = new int[dlugoscLiczbyRzymskiej+3];
    tablicaTymczasowa[dlugoscLiczbyRzymskiej]=0;
    tablicaTymczasowa[dlugoscLiczbyRzymskiej+1]=0;
    for(int i=0; i<dlugoscLiczbyRzymskiej; i++)
    {
        tablicaTymczasowa[i] = liczbyRzymskie(liczbaRzymska[i]);
    }

    for(int i=0; i<dlugoscLiczbyRzymskiej;)
    {
        if(tablicaTymczasowa[i]<tablicaTymczasowa[i+1])
        {
            liczba = liczba + tablicaTymczasowa[i+1]-tablicaTymczasowa[i];
            i = i+2;
        }
        else if ((tablicaTymczasowa[i]==tablicaTymczasowa[i+2]&&tablicaTymczasowa[i]!=tablicaTymczasowa[i+1])||tablicaTymczasowa[i+1]<tablicaTymczasowa[i+2])
        {
           liczba = liczba - tablicaTymczasowa[i+1]+tablicaTymczasowa[i];
            i = i+2;
        }

        else
        {
            liczba = liczba + tablicaTymczasowa[i+1]+tablicaTymczasowa[i];
            i = i+2;
        }
    }
    delete [] tablicaTymczasowa;
    return liczba;
}
string konwersjaNaLiczbeRzymska(int liczbaArabska)
{
    string cyfraRzymska="";
            while(liczbaArabska>0)
        {
            if(liczbaArabska>=1000)
            {
                cyfraRzymska = cyfraRzymska + "M";
                liczbaArabska = liczbaArabska-1000;
            }
            else if (liczbaArabska>=900&&liczbaArabska<1000)
            {
                cyfraRzymska = cyfraRzymska + "CM";
                liczbaArabska = liczbaArabska -900;
            }
            else if (liczbaArabska>=500&&liczbaArabska<900)
            {
                cyfraRzymska = cyfraRzymska + "D";
                liczbaArabska = liczbaArabska -500;
            }
            else if (liczbaArabska>=400&&liczbaArabska<500)
            {
                cyfraRzymska = cyfraRzymska + "CD";
                liczbaArabska = liczbaArabska -400;
            }
            else if (liczbaArabska>=100&&liczbaArabska<400)
            {
                cyfraRzymska = cyfraRzymska + "C";
                liczbaArabska = liczbaArabska -100;
            }
            else if (liczbaArabska>=90&&liczbaArabska<100)
            {
                cyfraRzymska = cyfraRzymska + "XC";
                liczbaArabska = liczbaArabska -90;
            }
            else if (liczbaArabska>=50&&liczbaArabska<90)
            {
                cyfraRzymska = cyfraRzymska + "L";
                liczbaArabska = liczbaArabska -50;
            }
            else if (liczbaArabska>=40&&liczbaArabska<50)
            {
                cyfraRzymska = cyfraRzymska + "XL";
                liczbaArabska = liczbaArabska -40;
            }
            else if (liczbaArabska>=10&&liczbaArabska<40)
            {
                cyfraRzymska = cyfraRzymska + "X";
                liczbaArabska = liczbaArabska -10;
            }
            else if (liczbaArabska==9)
            {
                cyfraRzymska = cyfraRzymska + "IX";
                liczbaArabska = liczbaArabska -9;
            }
            else if (liczbaArabska>=5&&liczbaArabska<9)
            {
                cyfraRzymska = cyfraRzymska + "V";
                liczbaArabska = liczbaArabska -5;
            }
            else if (liczbaArabska==4)
            {
                cyfraRzymska = cyfraRzymska + "IV";
                liczbaArabska = liczbaArabska -4;
            }
            else if (liczbaArabska<4)
            {
                cyfraRzymska = cyfraRzymska + "I";
                liczbaArabska = liczbaArabska -1;
            }

        }
        return cyfraRzymska;
}


int main()
{
    string piewrszaLiczbaRzymska,drugaLiczbaRzymska;
    int sumaLiczbRzymskich;
    int liczba1,liczba2;

    while(cin>>piewrszaLiczbaRzymska)

    {
        cin>>drugaLiczbaRzymska;
        sumaLiczbRzymskich = konwersjaNaLiczbeArabska(piewrszaLiczbaRzymska)+konwersjaNaLiczbeArabska(drugaLiczbaRzymska);

        cout<<konwersjaNaLiczbeRzymska(sumaLiczbRzymskich)<<endl;
        sumaLiczbRzymskich=0;
    }
    return 0;
}
