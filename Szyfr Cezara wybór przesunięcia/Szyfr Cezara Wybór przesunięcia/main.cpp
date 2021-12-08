#include <iostream>

using namespace std;

void przesuniecie(string wyraz, int prawo)
{
    int dlugosc;
    int litera;
    dlugosc = wyraz.length();
    cout<<prawo;
    for(int i=0; i<dlugosc; i++)
    {
        if(wyraz[i]!=' ')
        {
            litera = wyraz[i]+prawo;
            if (litera>90)
                litera = 64 + litera - 90;
            cout<<(char)litera;
        }
        else cout<<" ";
    }
}
int main()
{
    string wyraz;
    int prawo;
    cout<<"Podaj o ile znakow przesunac litery: ";
    cin>>prawo;
    while(prawo<1||prawo>25)
    {
        cout<<"Podaj ponownie liczbê o ile znakow przesunac litery: ";
        cin>>prawo;
    }
    getline(cin,wyraz);
    getline(cin,wyraz);
    przesuniecie(wyraz, prawo);
    return 0;
}
