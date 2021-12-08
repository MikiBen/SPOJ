#include <iostream>

using namespace std;

int main()
{
    int liczbatestow, iloscLiczb;
    int *tablica;

    cin>>liczbatestow;

    for(int i=0; i<liczbatestow; i++)
    {
        cin>> iloscLiczb;
        tablica = new int[iloscLiczb];

        for(int i=0; i<iloscLiczb; i++)
            cin>>tablica[i];

        for(int i=1; i<iloscLiczb; i+=2)
            cout<<tablica[i]<<" ";
        for(int i=0; i<iloscLiczb; i+=2)
            cout<<tablica[i]<<" ";

        delete []tablica;
        cout<<endl;
    }

    return 0;
}
