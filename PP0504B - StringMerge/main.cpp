#include <iostream>

using namespace std;

string string_merge(char A, char B)
{

    string wyraz = "XX";
    wyraz[0] =A;
    wyraz[1]= B;
    return wyraz;
}

int main()
{
    int t;
    int D1,D2,ile;

    string wyraz1, wyraz2,wynik,wyraz="";

    cin>>t;
    for(int j=0;j<t;j++)

    {
        cin>>wyraz1;
        cin>>wyraz2;
        D1 = wyraz1.length();
        D2 = wyraz2.length();
        if(D1<D2)
            ile=D1;
        else ile=D2;


        int i=0;
        for(int i=0; i<ile; i++)
        {
            wynik = string_merge(wyraz1[i],wyraz2[i]);
            wyraz = wyraz + wynik;
        }

        cout<<wyraz<<endl;
        wyraz="";
    }


    return 0;
}
