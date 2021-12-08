#include <iostream>

using namespace std;

int main()
{
    int liczba,liczbaPoprzednia;
    int i=0;

    liczbaPoprzednia =42;

    while(i<3)
    {
        cin>>liczba;


        if(liczba==42&&liczbaPoprzednia!=42)
        {
            i++;
        }
        liczbaPoprzednia=liczba;


        cout<<liczba<<endl;
    }

    return 0;
}
