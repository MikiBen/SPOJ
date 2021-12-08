#include <iostream>
#include <math.h>

using namespace std;

/*bool obliczenie(int A, int B, int C, int D)
{
    double P;
    double x,y,z;

           P= sqrt(A*A+B*B);
           if(P<D)
            return false;
    y=(P-D)/2;
    x= sqrt(y*y+C*C/4);
    z=(A-x)*(A-x)+(B-x)*(B-x);


    if(D<z)
        return true;
    else return false;


}
*/

bool obliczenie(int A, int B, int C, int D)
{
    double wynik,licznik, mianownik;

    licznik = 2*D*C*B+(D*D-C*C)*sqrt(D*D+C*C-B*B);
    mianownik = C*C+D*D;
    if(D>=B&&A>=licznik/mianownik)
        return true;
    else return false;
}



int main()
{
    int n, A,B,C,D;
    int AkrotszyBok,AdluzszyBok;
    int BkrotszyBok,BdluzszyBok;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>A;
        cin>>B;
        cin>>C;
        cin>>D;
        if(A>B)
        {
            AkrotszyBok=B;
            AdluzszyBok=A;
        }
        else
        {
            AkrotszyBok=A;
            AdluzszyBok=B;
        }
        if(C>D)
        {
            BkrotszyBok=D;
            BdluzszyBok=C;
        }
        else
        {
            BkrotszyBok=C;
            BdluzszyBok=D;
        }
        if(AkrotszyBok>BkrotszyBok&&AdluzszyBok>BdluzszyBok)
            cout<<"TAK"<<endl;
        else if(obliczenie(AkrotszyBok, AdluzszyBok, BkrotszyBok,BdluzszyBok))
        {
            cout<<"TAK"<<endl;
        }
        else cout<<"NIE"<<endl;

    }
    return 0;
}
