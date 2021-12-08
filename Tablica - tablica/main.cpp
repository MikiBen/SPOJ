#include <iostream>

using namespace std;

int main()
{
    int j=1, liczba;
    int *tablica, *tymczasowa;
    tymczasowa = new int [j];
    tablica = new int [j];

    while(cin>>liczba)
    {
        delete[] tymczasowa;
        tymczasowa = new int [j];
        for(int x=0; x<j-1; x++)
        {
            tymczasowa[x]=tablica[x];
        }
        tymczasowa[j-1]=liczba;
        delete[] tablica;
        tablica = new int [j];
        for(int i=0; i<j; i++)
        {
            tablica[i]=tymczasowa[i];
        }
        j++;
    }


    //for(int z=0; z<j-1; z++)
     //   cout<<tablica[z]<<" ";

    //cout<<endl<<endl;
    for(int z=j-2; z>=0; z--)
        cout<<tablica[z]<<" ";
    return 0;
}
