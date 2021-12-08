#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

void bin_to_Dec( int *tablica, int dlugosc)
{
    int j=dlugosc-1;
   // cout<<dlugosc<<"dlugosc"<<endl;
    unsigned long long int liczba=0, suma=0;
    int x;
    for(int i=0;i<dlugosc;i++)
    {   x=tablica[i];
        liczba = x*pow(2,j);
        suma = suma + liczba;
        j--;
       //cout<<suma<<"  "<<x<<"  "<<j<<"J"<<endl;
    }
        cout<<fixed;
    cout.precision(0);
    cout<<suma<<endl;

}


void dec_to_bin(unsigned long long int liczba)
{
	int i=0;
    unsigned long long int x;
    int tab[64];
   // cout<<liczba<<endl;
	while(liczba) //dopóki liczba bêdzie ró¿na od zera
	{
		x  =liczba%2;
		liczba/=2;
		//cout<<liczba<<"  "<<x<<endl;
		tab[i++]=x;
	}
	//system "pause";
		bin_to_Dec(tab,i);


}


int main()
{
	unsigned long long int liczba;
	//while(cin>>liczba)

    liczba= pow(2,65);
    liczba = liczba-1;

    cout<<liczba<<endl;
        if(liczba>0)
	dec_to_bin(liczba);
        else cout<<liczba<<endl;


	return 0;
}
