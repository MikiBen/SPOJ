#include <iostream>
#include<vector>
#include<algorithm>
#include <string>

using namespace std;

int main()
{
    vector<string>oryginalneSlowaPiosenki;
    string oryginalnyTekstPiosenki;
    string slowaKrzystofa;
    int PolozenieZnakuSpacji;
    int iloscPominietychSlow,dlugoscTekstu;

    getline(cin,oryginalnyTekstPiosenki);

    oryginalneSlowaPiosenki.reserve(1000000);

    PolozenieZnakuSpacji=oryginalnyTekstPiosenki.find_first_of(" ");
    while(PolozenieZnakuSpacji>0)
    {
        oryginalneSlowaPiosenki.push_back(oryginalnyTekstPiosenki.substr(0,PolozenieZnakuSpacji));
        oryginalnyTekstPiosenki.erase(0,PolozenieZnakuSpacji+1);
        PolozenieZnakuSpacji=oryginalnyTekstPiosenki.find_first_of(" ");

    }
    oryginalneSlowaPiosenki.push_back(oryginalnyTekstPiosenki);



    iloscPominietychSlow =  oryginalneSlowaPiosenki.size();
    while(cin>>slowaKrzystofa)
    {

        for(int i=0; i<iloscPominietychSlow; i++)
            if(oryginalneSlowaPiosenki[i]==slowaKrzystofa)
            {
                oryginalneSlowaPiosenki[i]=oryginalneSlowaPiosenki[iloscPominietychSlow-1];
                oryginalneSlowaPiosenki.pop_back();
                i=iloscPominietychSlow;
                iloscPominietychSlow--;
            }
    }

    cout<<iloscPominietychSlow<<endl;
    sort(oryginalneSlowaPiosenki.begin(),oryginalneSlowaPiosenki.end());
    for(int i=0; i<iloscPominietychSlow; i++)
        cout<<oryginalneSlowaPiosenki[i]<<endl;

    return 0;
}
