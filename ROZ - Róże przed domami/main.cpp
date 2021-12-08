#include <iostream>

using namespace std;

int main()
{
    int t, wynik;
    cin>>t;
    int *czerwone,*zolte,*biale,wynikTymczasowy, cena=0, suma=0;
    czerwone = new int [t+3];
    biale = new int [t+3];
    zolte = new int [t+3];
    for(int i=0; i<t; i++)
    {
        cin>>czerwone[i];
        cin>>biale[i];
        cin>>zolte[i];
    }
    for(int i=0; i<3; i++)
    {
        czerwone[t+i]=0;
        biale[t+i]=0;
        zolte[t+i]=0;
    }




    for(int i=0; i<t-4; i++)
    {
        wynikTymczasowy=czerwone[i] + biale[i+1]+ czerwone[i+2]+ biale[i+3];
        cena = czerwone[i];
        wynik=czerwone[i] + biale[i+1]+ czerwone[i+2]+ zolte[i+3];
        if(wynik<wynikTymczasowy)
        {
            wynikTymczasowy=wynik;
            cena = czerwone[i];
        }
        wynik=czerwone[i] + biale[i+1]+ zolte[i+2]+ czerwone[i+3];
        if(wynik<wynikTymczasowy)
        {
            wynikTymczasowy=wynik;
            cena = czerwone[i];
        }
        wynik=czerwone[i] + biale[i+1]+ zolte[i+2]+ biale[i+3];
        if(wynik<wynikTymczasowy)
        {
            wynikTymczasowy=wynik;
            cena = czerwone[i];
        }
        wynik=czerwone[i] + zolte[i+1]+ czerwone[i+2]+ biale[i+3];
        if(wynik<wynikTymczasowy)
        {
            wynikTymczasowy=wynik;
            cena = czerwone[i];
        }
        wynik=czerwone[i] + zolte[i+1]+ czerwone[i+2]+ zolte[i+3];
        if(wynik<wynikTymczasowy)
        {
            wynikTymczasowy=wynik;
            cena = czerwone[i];
        }
        wynik= czerwone[i] + zolte[i+1]+ biale[i+2]+ czerwone[i+3];
        if(wynik<wynikTymczasowy)
        {
            wynikTymczasowy=wynik;
            cena = czerwone[i];
        }
        wynik=czerwone[i] + zolte[i+1]+ biale[i+2]+ zolte[i+3];
        if(wynik<wynikTymczasowy)
        {
            wynikTymczasowy=wynik;
            cena = czerwone[i];
        }
        wynik=biale[i] + czerwone[i+1]+ biale[i+2]+ czerwone[i+3];
        if(wynik<wynikTymczasowy)
        {
            wynikTymczasowy=wynik;
            cena = biale[i];
        }
        wynik= biale[i] + czerwone[i+1]+ biale[i+2]+ zolte[i+3];
        if(wynik<wynikTymczasowy)
        {
            wynikTymczasowy=wynik;
            cena = biale[i];
        }
        wynik=biale[i] + czerwone[i+1]+ zolte[i+2]+ czerwone[i+3];
        if(wynik<wynikTymczasowy)
        {
            wynikTymczasowy=wynik;
            cena = biale[i];
        }
        wynik=biale[i] + czerwone[i+1]+ zolte[i+2]+ biale[i+3];
        if(wynik<wynikTymczasowy)
        {
            wynikTymczasowy=wynik;
            cena = biale[i];
        }
        wynik=biale[i] + zolte[i+1]+ czerwone[i+2]+ biale[i+3];
        if(wynik<wynikTymczasowy)
        {
            wynikTymczasowy=wynik;
            cena = biale[i];
        }
        wynik=biale[i] + zolte[i+1]+ czerwone[i+2]+ zolte[i+3];
        if(wynik<wynikTymczasowy)
        {
            wynikTymczasowy=wynik;
            cena = biale[i];
        }
        wynik=biale[i] + zolte[i+1]+ biale[i+2]+ czerwone[i+3];
        if(wynik<wynikTymczasowy)
        {
            wynikTymczasowy=wynik;
            cena = biale[i];
        }
        wynik=biale[i] + zolte[i+1]+ biale[i+2]+ zolte[i+3];
        if(wynik<wynikTymczasowy)
        {
            wynikTymczasowy=wynik;
            cena = biale[i];
        }
        wynik=zolte[i] + czerwone[i+1]+ biale[i+2]+ czerwone[i+3];
        if(wynik<wynikTymczasowy)
        {
            wynikTymczasowy=wynik;
            cena = zolte[i];
        }
        wynik=zolte[i] + czerwone[i+1]+ biale[i+2]+ zolte[i+3];
        if(wynik<wynikTymczasowy)
        {
            wynikTymczasowy=wynik;
            cena = zolte[i];
        }
        wynik=zolte[i] + czerwone[i+1]+ zolte[i+2]+ czerwone[i+3];
        if(wynik<wynikTymczasowy)
        {
            wynikTymczasowy=wynik;
            cena = zolte[i];
        }
        wynik= zolte[i] + czerwone[i+1]+ zolte[i+2]+ biale[i+3];
        if(wynik<wynikTymczasowy)
        {
            wynikTymczasowy=wynik;
            cena = zolte[i];
        }
        wynik=zolte[i] + biale[i+1]+ czerwone[i+2]+ biale[i+3];
        if(wynik<wynikTymczasowy)
        {
            wynikTymczasowy=wynik;
            cena = zolte[i];
        }
        wynik=zolte[i] + biale[i+1]+ czerwone[i+2]+ zolte[i+3];
        if(wynik<wynikTymczasowy)
        {
            wynikTymczasowy=wynik;
            cena = zolte[i];
        }
        wynik=zolte[i] + biale[i+1]+ zolte[i+2]+ czerwone[i+3];
        if(wynik<wynikTymczasowy)
        {
            wynikTymczasowy=wynik;
            cena = zolte[i];
        }
        wynik=zolte[i] + biale[i+1]+ zolte[i+2]+ biale[i+3];
        if(wynik<wynikTymczasowy)
        {
            wynikTymczasowy=wynik;
            cena = zolte[i];
        }
        suma = suma+cena;
    }
    int i;
    if(t<4)
        i = 0;
    else i=t-4;

    wynikTymczasowy=czerwone[i] + biale[i+1]+ czerwone[i+2]+ biale[i+3];
    wynik=czerwone[i] + biale[i+1]+ czerwone[i+2]+ zolte[i+3];
    if(wynik<wynikTymczasowy)
    {
        wynikTymczasowy=wynik;
        //<<"1"<<endl;
    }
    wynik=czerwone[i] + biale[i+1]+ zolte[i+2]+ czerwone[i+3];
    if(wynik<wynikTymczasowy)
    {
        wynikTymczasowy=wynik;
        //<<"2";
    }
    wynik=czerwone[i] + biale[i+1]+ zolte[i+2]+ biale[i+3];
    if(wynik<wynikTymczasowy)
    {
        wynikTymczasowy=wynik;
        //<<"3"<<endl;
    }
    wynik=czerwone[i] + zolte[i+1]+ czerwone[i+2]+ biale[i+3];
    if(wynik<wynikTymczasowy)
    {
        wynikTymczasowy=wynik;
        //<<"4"<<endl;
    }
    wynik=czerwone[i] + zolte[i+1]+ czerwone[i+2]+ zolte[i+3];
    if(wynik<wynikTymczasowy)
    {
        wynikTymczasowy=wynik;
        //<<"5"<<endl;
    }
    wynik= czerwone[i] + zolte[i+1]+ biale[i+2]+ czerwone[i+3];
    if(wynik<wynikTymczasowy)
    {
        //<<endl<<czerwone[i]<<endl;
        //<<zolte[i+1]<<endl;
        //<<biale[i+2]<<endl;
        //<<czerwone[i+3]<<endl;
        wynikTymczasowy=wynik;
        //<<"6"<<endl;
        //<<wynik<<"wynik" <<endl;
    }
    wynik=czerwone[i] + zolte[i+1]+ biale[i+2]+ zolte[i+3];
    if(wynik<wynikTymczasowy)
    {
        wynikTymczasowy=wynik;
        //<<"7"<<endl;
    }
    wynik=biale[i] + czerwone[i+1]+ biale[i+2]+ czerwone[i+3];
    if(wynik<wynikTymczasowy)
    {
        wynikTymczasowy=wynik;
        //<<"8"<<endl;
    }
    wynik= biale[i] + czerwone[i+1]+ biale[i+2]+ zolte[i+3];
    if(wynik<wynikTymczasowy)
    {
        wynikTymczasowy=wynik;
        //<<"9"<<endl;
    }
    wynik=biale[i] + czerwone[i+1]+ zolte[i+2]+ czerwone[i+3];
    if(wynik<wynikTymczasowy)
    {
        wynikTymczasowy=wynik;
        //<<"10"<<endl;
    }
    wynik=biale[i] + czerwone[i+1]+ zolte[i+2]+ biale[i+3];
    if(wynik<wynikTymczasowy)
    {
        wynikTymczasowy=wynik;
        //<<"11"<<endl;
    }
    wynik=biale[i] + zolte[i+1]+ czerwone[i+2]+ biale[i+3];
    if(wynik<wynikTymczasowy)
    {
        wynikTymczasowy=wynik;
        //<<"12"<<endl;
    }
    wynik=biale[i] + zolte[i+1]+ czerwone[i+2]+ zolte[i+3];
    if(wynik<wynikTymczasowy)
    {
        wynikTymczasowy=wynik;
        //<<"13"<<endl;
    }
    wynik=biale[i] + zolte[i+1]+ biale[i+2]+ czerwone[i+3];
    if(wynik<wynikTymczasowy)
    {
        wynikTymczasowy=wynik;
        //<<"14"<<endl;
    }
    wynik=biale[i] + zolte[i+1]+ biale[i+2]+ zolte[i+3];
    if(wynik<wynikTymczasowy)
    {
        wynikTymczasowy=wynik;
        //<<"15"<<endl;
    }
    wynik=zolte[i] + czerwone[i+1]+ biale[i+2]+ czerwone[i+3];
    if(wynik<wynikTymczasowy)
    {
        wynikTymczasowy=wynik;
        //<<"16"<<endl;
    }
    wynik=zolte[i] + czerwone[i+1]+ biale[i+2]+ zolte[i+3];
    if(wynik<wynikTymczasowy)
    {
        wynikTymczasowy=wynik;
        //<<"17"<<endl;
    }
    wynik=zolte[i] + czerwone[i+1]+ zolte[i+2]+ czerwone[i+3];
    if(wynik<wynikTymczasowy)
    {
        wynikTymczasowy=wynik;
        //<<"18"<<endl;
    }
    wynik= zolte[i] + czerwone[i+1]+ zolte[i+2]+ biale[i+3];
    if(wynik<wynikTymczasowy)
    {
        wynikTymczasowy=wynik;
        //<<"19"<<endl;
    }
    wynik=zolte[i] + biale[i+1]+ czerwone[i+2]+ biale[i+3];
    if(wynik<wynikTymczasowy)
    {
        wynikTymczasowy=wynik;
        //<<"20"<<endl;
    }
    wynik=zolte[i] + biale[i+1]+ czerwone[i+2]+ zolte[i+3];
    if(wynik<wynikTymczasowy)
    {
        wynikTymczasowy=wynik;
        //<<"21"<<endl;
    }
    wynik=zolte[i] + biale[i+1]+ zolte[i+2]+ czerwone[i+3];
    if(wynik<wynikTymczasowy)
    {
        wynikTymczasowy=wynik;
        //<<"22"<<endl;
    }
    wynik=zolte[i] + biale[i+1]+ zolte[i+2]+ biale[i+3];
    if(wynik<wynikTymczasowy)
    {
        wynikTymczasowy=wynik;
        //<<"23"<<endl;
    }

    //<<suma<<"SUma"<<endl;
//<<wynikTymczasowy<<"wynikTymczasowy"<<endl;
    suma = suma+wynikTymczasowy;






    cout<<suma<<endl;
    return 0;
}
