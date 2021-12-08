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
        else if (wyraz[i]==67)
            wyraz[i] = 90;
        else if (wyraz[i]==66)
            wyraz[i] = 89;
        else if (wyraz[i]==65)
            wyraz[i] = 88;

        else wyraz[i] = wyraz[i]-3;
    }
    cout<<wyraz;
    return 0;
}
