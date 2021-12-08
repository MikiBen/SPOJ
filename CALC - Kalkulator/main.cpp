#include <iostream>

using namespace std;

int WykonanieOdpowiedniejOpreacji(char znak, int pierwszaliczba, int drugaliczba)

{
    int wynik;
    switch(znak)
    {
    case '+':
    {
        wynik = pierwszaliczba + drugaliczba;
        break;
    }
    case '-':
    {
        wynik = pierwszaliczba - drugaliczba;
        break;
    }
    case '*':
    {
        wynik = pierwszaliczba * drugaliczba;
        break;
    }
    case '/':
    {
        wynik = pierwszaliczba / drugaliczba;
        break;
    }
    case '%':
    {
        wynik = pierwszaliczba % drugaliczba;
        break;
    }
    }
    return wynik;
}


int main()
{
    char znakoperacji[100];
    int pierwszaliczba[100], drugaliczba[100],wynik[100];
    int liczbaprzykladow,i=0;

    while(cin>>znakoperacji[i])
    {
        cin>>pierwszaliczba[i];
        cin>>drugaliczba[i];
        wynik[i] = WykonanieOdpowiedniejOpreacji(znakoperacji[i],pierwszaliczba[i],drugaliczba[i]);
        i++;

    }
    liczbaprzykladow = i;
    for(int i=0; i<liczbaprzykladow; i++)
    {
        cout<<wynik[i]<<endl;
    }

    return 0;
}

