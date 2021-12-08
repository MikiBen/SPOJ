#include <iostream>
#include <math.h>

using namespace std;


double obliczenieSredniejArytmetycznej(int liczba)
{
    double sredniaArytmetyczna=0 ;
    int suma = 0,pierwiastek;
    int liczbaDzielnikow=0;
    for(int i=2; i<sqrt(liczba); i++)
    {
        if(liczba%i==0)
        {
            suma = i +suma + liczba/i;
            liczbaDzielnikow=liczbaDzielnikow+2 ;
        }
    }
    pierwiastek = sqrt(liczba);
    if(pierwiastek *pierwiastek ==liczba&&liczba>1)
    {
        suma = suma +pierwiastek ;
        liczbaDzielnikow++;
    }

    if(suma!=0)
    {
        sredniaArytmetyczna = 1.0*suma/liczbaDzielnikow;

    }
    return sredniaArytmetyczna;
}

int main()
{
    int liczba,drugaLiczba, liczbaTestow;;
    int iloscLiczbZnaczacych=0;
    double sredniaArytmetyczna;
    cin>>liczbaTestow;
    for(int j=0; j<liczbaTestow; j++)

    {
        cin>>liczba;
        cin>> drugaLiczba;
        for(int i=liczba; i<=drugaLiczba; i++)
        {
            sredniaArytmetyczna = obliczenieSredniejArytmetycznej(i);

            if(sredniaArytmetyczna>0)
            {
                if(sredniaArytmetyczna<=sqrt(i))
                {
                    iloscLiczbZnaczacych++;
                }
            }
        }
       // cout<<sredniaArytmetyczna;
        cout<<iloscLiczbZnaczacych;
    }



    return 0;
}
