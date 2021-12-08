#include <iostream>

using namespace std;


void wyswietlenieLiczby(long long int liczba)
{

    long long int dzielnik = 100000000000000;

    for(int i=0; i<14; i++)
    {
        if(liczba/dzielnik<1)
        {
            cout<<0;
            dzielnik = dzielnik/10;
        }

        else
        {
            cout<<liczba;
            return;
        }
    }



    return;
}

int main()
{

    long long int x,y;
    long long  int suma[300]= {};
    cin>>x;
    cin>>y;
//x=44;
    //  y=10;
    if(x==0)
    {
        cout<<0;
        return 0;
    }



    suma[0]=1;

    for(int i=0; i<y; i++)
    {

        for(int j=0; j<300; j++)
        {
            suma[j]= suma[j]*x;
        }

        for(int j=0; j<299; j++)
        {
            if(suma[j]>=1000000000000000)
            {
                suma[j+1]=suma[j+1]+suma[j]/1000000000000000;
                suma[j]= suma[j]%1000000000000000;
            }
        }

    }

    int z=299;
    while(suma[z]==0)
    {
        z--;
    }
    cout<<suma[z];

    for(int i=z-1; i>=0; i--)
    {
        if(suma[i]!=0)
            //cout<<suma[i];
            wyswietlenieLiczby(suma[i]);
    }



    return 0;
}
