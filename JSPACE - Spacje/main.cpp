#include <iostream>
//#include <windows.h>
#include <string>
using namespace std;

int main()
{
    string zdanie="",tekst;
    int dlugoscTekstu;

    while(getline(cin,tekst))
    {
        dlugoscTekstu = tekst.length();
        for(int i=0; i<dlugoscTekstu; i++)
        {
            if(tekst[i]==' ')
            {
                if(tekst[i+1]!=' ')
                {
                    if(tekst[i+1]>96)
                        tekst[i+1]= tekst[i+1]-32;
                    zdanie = zdanie + tekst[i+1];
                    i++;
                }
            }
            else zdanie = zdanie + tekst[i];
        }
        cout<<zdanie<<endl;
        zdanie="";

    }
    return 0;
}
