#include <iostream>

using namespace std;

int main()
{
    int i,n, tablica[100];
    int liczbatestow;

    cin>> liczbatestow;
    while(liczbatestow--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>tablica[i];
        }
        for(int i=n-1; i>=0; i--)
        {
            cout<<tablica[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

