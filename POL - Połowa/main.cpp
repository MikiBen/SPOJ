#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a,ilosc;
    string slowo,t;

    getline(cin,t);
    ilosc = atoi(t.c_str());

    for(int i=0;i<ilosc;i++)
    {
        getline(cin,slowo);
        a = slowo.length();
        slowo = slowo.substr(0,a/2);
        cout<<slowo<<endl;

    }
return 0;
}
