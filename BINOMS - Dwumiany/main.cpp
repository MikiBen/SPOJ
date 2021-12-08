#include <iostream>

using namespace std;

int main()
{
    int a,b,n,c,k,T,wynik3;
    long double wynik, wynik2;
    cin>>T;

    for(int i=0; i<T; i++)
    {
        wynik=1;
        wynik2=1;
        cin>>n;
        cin>>k;
        a=n-k;
        if(k>n-k)
        {   c=n;
            for(int i=0; i<n-k ; i++)
            {
                wynik = c*wynik;
                wynik2 = a*wynik2;

                c--;
                a--;
            }
        }
        else
        {
            b=k;
            for(int i=0; i<k ; i++)
            {
                wynik = n*wynik;
                wynik2 = b*wynik2;
                n--;
                b--;
            }
        }
        wynik3= wynik/wynik2;
        cout<<wynik3<<endl;
    }


    return 0;
}
