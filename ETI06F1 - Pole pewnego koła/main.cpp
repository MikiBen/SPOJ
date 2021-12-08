#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    double Pi = 3.141592654;
    double r,d;
    double pole;

            cin>>r;
    cin>>d;

    pole = (r*r - d*d/4)*Pi;
    pole = pole *100;
    pole = round (pole);
    cout<<fixed;
    cout<<setprecision(2);
    cout<<pole/100<<endl;



    return 0;
}
