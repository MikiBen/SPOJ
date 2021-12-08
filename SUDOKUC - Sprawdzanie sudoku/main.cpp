#include <iostream>

using namespace std;


bool sprawdzenie (int tab[9][9])
{
    int suma[9],suma2[9],calosc=0;
    bool wynik=true;


    for(int i=0; i<9; i++)
    {
        suma[i]=0;
        for(int j=0; j<9; j++)
            suma[i]=suma[i]+tab[i][j];
        if(suma[i]!=45)
            wynik = false;
    }

    for(int i=0; i<9; i++)
    {
        suma2[i]=0;
        for(int j=0; j<9; j++)
            suma2[i]=suma2[i]+tab[j][i];
        if(suma2[i]!=45)
            wynik = false;
    }
    return wynik;
}

bool powtarzenie(int tab[9][9])
{
    bool wynik;
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            for(int m=j+1; m<9; m++)
            {
                if(tab[i][j]==tab[i][m])
                    return false;
            }
        }
    }


    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            for(int m=j+1; m<9; m++)
            {
                if(tab[j][i]==tab[m][i])
                    return false;
            }
        }
    }

    int suma;
    for(int i=0; i<7;)
    {
        for(int j=0; j<7; )
        {
            suma=0;
            for(int m=0; m<3; m++)
            {
                suma = suma + tab[i+m][j]+ tab[i+m][j+1]+tab[i+m][j+2];
                //cout<<suma<<endl;
            }
            if(suma!=45)
            {
                return false;
            }
            j=j+3;
        }
        i=i+3;
    }

    return true;

}


int main()
{
    int t;
    cin>>t;
    int k;
    for(int x=0; x<t; x++)
    {
        int tablica[9][9];
        string wynik="TAK";
        for(int i=0; i<9; i++)
            for(int j=0; j<9; j++)
            {
                cin>>tablica[i][j];
                if(tablica[i][j]<1||tablica[i][j]>9)
                    wynik = "NIE";
            }
        if(wynik=="TAK")
        {
            if(powtarzenie(tablica)&&sprawdzenie(tablica))
                wynik = "TAK";
            else wynik = "NIE";
        }
        cout<<wynik<<endl;

    }

    return 0;
}
