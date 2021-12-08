#include <iostream>
#include <vector>

using namespace std;

double ObliczenieBMI (int waga, double wzrost)
{
    double wskaznikBMI;

    wskaznikBMI = waga/(wzrost*wzrost);
    return wskaznikBMI;
}



int main()
{
    int liczbaBadanychOsob;
    vector<string>ListaImionZNiedowaga;
    vector<string>ListaImionZNadwaga;
    vector<string>ListaImionZwagaPrawidlowa;
    int waga;
    double wskaznikBMI, wzrost;
    string imie;
    vector<string>::iterator iter;
    cin>>liczbaBadanychOsob;

    for(int i=0; i<liczbaBadanychOsob; i++)
    {
        cin>>imie;
        cin>>waga;
        cin>>wzrost;
        wskaznikBMI = ObliczenieBMI(waga, wzrost/100);
        if(wskaznikBMI<18.5)
            ListaImionZNiedowaga.push_back(imie);
        else if(wskaznikBMI>=25)
            ListaImionZNadwaga.push_back(imie);
        else ListaImionZwagaPrawidlowa.push_back(imie);
    }

    //cout<<ListaImionZwagaPrawidlowa.size()<<endl;
       //  iter=ListaImionZwagaPrawidlowa.begin();
   //ListaImionZwagaPrawidlowa.erase(iter);
//cout<<ListaImionZwagaPrawidlowa.size()<<endl;



    cout<<"niedowaga"<<endl;
    for(vector<string>::iterator itr=ListaImionZNiedowaga.begin(); itr!=ListaImionZNiedowaga.end(); ++itr)
        cout<<*itr<<endl;
    cout<<endl<<"wartosc prawidlowa"<<endl;
    for(vector<string>::iterator itr=ListaImionZwagaPrawidlowa.begin(); itr!=ListaImionZwagaPrawidlowa.end(); ++itr)
        cout<<*itr<<endl;
    cout<<endl<<"nadwaga"<<endl;
    for(vector<string>::iterator itr=ListaImionZNadwaga.begin(); itr!=ListaImionZNadwaga.end(); ++itr)
        cout<<*itr<<endl;

    return 0;
}
