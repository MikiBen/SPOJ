#include <iostream>

using namespace std;

void zmianaZnaku(string wyraz)
{
    int dlugosc;
    dlugosc = wyraz.length()/2;
    int tab1[dlugosc];
    int tab2[dlugosc];
    int a=0,b=1,y;
    for(int i=0; i<dlugosc; i++)
    {
        tab1[i]=wyraz[a]-65;
        a=a+2;
        tab2[i]=(wyraz[b]-65)*16;
        b=b+2;
        y=tab1[i]+tab2[i];
        cout<<(char)y;
    }
    cout<<endl;
}

int main()
{
    string wyraz;
    while(cin>>wyraz)
        zmianaZnaku(wyraz);
    return 0;
}
