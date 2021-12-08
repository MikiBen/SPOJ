#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

void bin_to_Dec(int *tablica, int dlugosc)
{
    int j=dlugosc-1;
    long double liczba=0;
    for(int i=0; i<dlugosc; i++)
    {
        liczba += tablica[i]*pow(2,j);
        j--;

    }
    cout<<fixed;
    cout.precision(0);
    cout<<liczba<<endl;
}


void dec_to_bin(unsigned long long int liczba)
{
    int i=0;
    int tab[65];
    while(liczba) //dopóki liczba bêdzie ró¿na od zera
    {
        tab[i++]=liczba%2;
        liczba/=2;

    }
    bin_to_Dec(tab,i);

}


int main()
{
    long double liczba;
    while(cin>>liczba)
        if(liczba>0)
            dec_to_bin(liczba);
        else cout<<liczba<<endl;


    return 0;
}
______________________________________________
