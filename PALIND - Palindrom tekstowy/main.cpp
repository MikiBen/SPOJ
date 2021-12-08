#include <iostream>

using namespace std;

string palindrom(string wyraz)
{
    int j;
    string wynik = "tak";
    j = wyraz.length()-1;
    for(int i=0; i<j; i++)
        if(wyraz[i]==wyraz[j])
            j--;
        else wynik="nie";

    return wynik;

}

int main()
{
    int n;
    string wyraz;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>wyraz;
        cout<<palindrom(wyraz)<<endl;
    }

    return 0;
}
