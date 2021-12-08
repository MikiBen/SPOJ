#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector <string> pobierzWyrazyZTekstu(string tekst)
{
    vector <string> wyrazyZTekstu;
    string wyraz = "";

    for (int pozycjaWyrazu = 0; pozycjaWyrazu <= tekst.size(); pozycjaWyrazu++)
    {
        if (tekst[pozycjaWyrazu] >= 'A' && tekst[pozycjaWyrazu] <= 'Z')
        {
            wyraz += tekst[pozycjaWyrazu];
        }
        else
        {
            wyrazyZTekstu.push_back(wyraz);
            wyraz = "";
        }
    }

    return wyrazyZTekstu;
}

vector <string> pobierzPominieteWyrazy(vector <string> wyrazyOryginalnegoTekstu, vector <string> wyrazyNiekompletnegoTekstu)
{
    vector <string> wyrazyPominieteWTekscie;
    int pozycjaWyrazuOryginalnego = 0;
    int pozycjaWyrazuNiekompletnego = 0;

    while (pozycjaWyrazuOryginalnego < wyrazyOryginalnegoTekstu.size())
    {
        if ( (pozycjaWyrazuNiekompletnego < wyrazyNiekompletnegoTekstu.size()) && (wyrazyOryginalnegoTekstu[pozycjaWyrazuOryginalnego] == wyrazyNiekompletnegoTekstu[pozycjaWyrazuNiekompletnego]) )
        {
            pozycjaWyrazuOryginalnego++;
            pozycjaWyrazuNiekompletnego++;
        }
        else
        {
            wyrazyPominieteWTekscie.push_back(wyrazyOryginalnegoTekstu[pozycjaWyrazuOryginalnego]);
            pozycjaWyrazuOryginalnego++;
        }
    }
    return wyrazyPominieteWTekscie;
}

void wypiszWyrazy(vector <string> wyrazyZTekstu)
{
    for (int pozycjaWyrazu = 0; pozycjaWyrazu < wyrazyZTekstu.size(); pozycjaWyrazu++)
    {
        cout << wyrazyZTekstu[pozycjaWyrazu] << endl;
    }
}

int main()
{
    string oryginalnyTekst = "";
    string niekompletnyTekst = "";

    vector <string> wyrazyOryginalnegoTekstu;
    vector <string> wyrazyNiekompletnegoTekstu;
    vector <string> wyrazyPominieteWTekscie;

    getline(cin, oryginalnyTekst);
    cin.sync();
    getline(cin, niekompletnyTekst);
    cin.sync();

    wyrazyOryginalnegoTekstu = pobierzWyrazyZTekstu(oryginalnyTekst);
    wyrazyNiekompletnegoTekstu = pobierzWyrazyZTekstu(niekompletnyTekst);
    wyrazyPominieteWTekscie = pobierzPominieteWyrazy(wyrazyOryginalnegoTekstu, wyrazyNiekompletnegoTekstu);

    if (wyrazyPominieteWTekscie.size() == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << wyrazyPominieteWTekscie.size() << endl;
        sort(wyrazyPominieteWTekscie.begin(), wyrazyPominieteWTekscie.end());
        wypiszWyrazy(wyrazyPominieteWTekscie);
    }
    return 0;
}
