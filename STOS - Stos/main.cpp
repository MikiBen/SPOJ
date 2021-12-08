#include <iostream>

using namespace std;

int tablica[10], rozmiar=0;

void dodanieDoStosu()
{
    if(rozmiar<10)
    {
        cin>>tablica[rozmiar];
        rozmiar = rozmiar +1;
        cout<<":)"<<endl;
    }

    else cout<<":("<<endl;
}

void odjecieZeStosu()
{
    if(rozmiar>0)
    {
        cout<<tablica[rozmiar-1]<<endl;
        rozmiar = rozmiar -1;
    }

    else cout<<":("<<endl;
}



int main()
{
    char znak;
    while(cin>>znak)
    {
        switch (znak)
        {
        case '+':
            dodanieDoStosu();
            break;

        case '-':
            odjecieZeStosu();
            break;

        }
    }


    return 0;
}
