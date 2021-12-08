#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    string dane;
    int n1,n2,k1,k2;
    int dlugosc,wynik;
    int a=0;
    int spacja[3];
    getline(cin,dane);

    dlugosc = dane.length();
    for(int i=0;i<dlugosc;i++)
    {
    if(dane[i]==32)
        {
            spacja[a]=i;
            a++;
        }
    }
    n1 = atoi(dane.substr(0,spacja[0]).c_str());
    k1 = atoi(dane.substr(spacja[0],spacja[1]).c_str());
    n2 = atoi(dane.substr(spacja[1],spacja[2]).c_str());
    k2 = atoi(dane.substr(spacja[2],dlugosc).c_str());

    wynik=n1*k1+n2*k2;
    cout<< wynik;
    return 0;
}
