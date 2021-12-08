#include <iostream>

using namespace std;

void sortowanieBabelkowe(int *tab, int n)
{
    int bufor;
    for(int i=1; i<n; i++)
    {
        for(int j=n-1; j>=1; j--)
        {
            if(tab[j]<tab[j-1])
            {
                bufor = tab[j];
                tab[j] = tab[j-1];
                tab[j-1]=bufor;
            }
        }

    }
}

int zliczenie(int A,int *tab, int n)
{
    int wynik=0,suma,i=0;
    suma = tab[0];
    while(A>=suma&&i<n)
    {
        wynik++;
        i++;
        suma = suma + tab[i];
    }

    return wynik;

}

int main()
{
    int n,A,B, wynik1, wynik2;
    cin>>n;
    cin>>A;
    cin>>B;
    int *NicZielona,*NicZolta;
    NicZielona = new int  [n];
    NicZolta  = new int [n];

    for(int i=0; i<n; i++)
    {
        cin>>NicZielona[i];
        cin>>NicZolta [i];
    }

    sortowanieBabelkowe(NicZielona,n);
    sortowanieBabelkowe(NicZolta,n);

    wynik1=zliczenie(A,NicZielona,n);
    wynik2=zliczenie(B,NicZolta,n);

    if(wynik1<wynik2)
        cout<<wynik1<<endl<<endl;
    else cout<<wynik2<<endl<<endl;



    return 0;
}
