#include <iostream>

using namespace std;


int obzartuchy(int LiczbaObzartuchow,int LiczbaCiastekWPudelku )
{
    int czas = 3600*24;
    int iloscCiastekNaDobe=0,iloscPudelek;
    int obzartuch;
    for(int i=0; i<LiczbaObzartuchow; i++)
    {
        cin>>obzartuch;
        iloscCiastekNaDobe+= czas/obzartuch;
    }

    if(iloscCiastekNaDobe%LiczbaCiastekWPudelku==0)
        iloscPudelek=iloscCiastekNaDobe/LiczbaCiastekWPudelku;
    else iloscPudelek=iloscCiastekNaDobe/LiczbaCiastekWPudelku+1;
    return iloscPudelek;

}
int main()
{

    int LiczbaCiastekWPudelku, LiczbaObzartuchow,t;

    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>LiczbaObzartuchow;
        cin>>LiczbaCiastekWPudelku;
        cout<< obzartuchy(LiczbaObzartuchow,LiczbaCiastekWPudelku)<<endl;

    }

    return 0;
}
