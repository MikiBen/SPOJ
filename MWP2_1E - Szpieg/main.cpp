#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<string>listaWyrazow;
    string wyraz;

    while(cin>>wyraz)
    listaWyrazow.push_back(wyraz);

    sort(listaWyrazow.begin(),listaWyrazow.end());

    for(vector<string>::iterator itr=listaWyrazow.begin();itr!=listaWyrazow.end();++itr)
    cout<<*itr<<endl;

    return 0;
}
