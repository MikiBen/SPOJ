#include <iostream>

using namespace std;

int main()
{
    int *tablica;
    int liczbaTestow,iloscLiczb;

    cin>>liczbaTestow;
    for(int i=0; i<liczbaTestow; i++)
    {
        cin>>iloscLiczb;
        tablica= new int [iloscLiczb];

        for(int i=0; i<iloscLiczb; i++)
            cin>>tablica[i];

        for(int i=1; i<iloscLiczb; i++)
            cout<<tablica[i]<<" ";

        cout<<tablica[0]<<endl;
        delete []tablica;
    }

    return 0;
}
