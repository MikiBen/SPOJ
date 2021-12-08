#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string tekst,wyraz;
    int dlugoscTekstu,koniec;

    while(getline(cin,tekst))
    {
        wyraz= wyraz + "\n" + tekst;
    }

    dlugoscTekstu = wyraz.length();

    for(int i=0; i<dlugoscTekstu; i++)
    {
        if(wyraz[i]==32||wyraz[i]==10)
            wyraz[i] = wyraz[i];
        else if (wyraz[i]==90)
            wyraz[i] = 67;
        else if (wyraz[i]==89)
            wyraz[i] = 66;
        else if (wyraz[i]==88)
            wyraz[i] = 65;

        else wyraz[i] = wyraz[i]+3;
    }
    cout<<wyraz;
    return 0;
}
