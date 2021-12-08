#include <iostream>

using namespace std;

int main()
{
    int t,n,suma,liczba;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>n;
        suma=0;
        for(int j=0; j<n; j++)
        {
            cin>>liczba;
            suma=suma + liczba;
        }
        cout<<suma<<endl;
    }
    return 0;
}
