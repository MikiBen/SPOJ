#include <iostream>
#include <map>
using namespace std;

string konwersjaNaAlfabetMorse(char litera)
{
    string kodMorse;
    map<char,string>AlfabetMorse;

    if(litera>95)
        litera = (char)(litera-32);
    AlfabetMorse=
    {
        {'A',  ".-"},
        {'B',  "-..."},
        {'C',  "-.-."},
        {'D',  "-.."},
        {'E',  "."},
        {'F',  ".-.."},
        {'G',  "--."},
        {'H',  "...."},
        {'I',  ".."},
        {'J',  ".---"},
        {'K',  "-.-"},
        {'L',  "..-."},
        {'M',  "--"},
        {'N',  "-."},
        {'O',  "---"},
        {'P',  ".--."},
        {'Q',  "--.-"},
        {'R',  ".-."},
        {'S',  "..."},
        {'T',  "-"},
        {'U',  "..-"},
        {'V',  "...-"},
        {'W',  ".--"},
        {'X',  "-..-"},
        {'Y',  "-.--"},
        {'Z',  "--.."}

    };
    kodMorse = AlfabetMorse[litera];
    return kodMorse;
}


int main()
{

    string ciagLiter;
    int dlugoscCiaguLiter;

    while(getline(cin,ciagLiter))
    {
        dlugoscCiaguLiter = ciagLiter.length();

        for(int i=0; i<dlugoscCiaguLiter; i++)
        {
            cout<<konwersjaNaAlfabetMorse(ciagLiter[i]);
            cout<<"/";
        }
        cout<<endl;
    }

    return 0;
}
