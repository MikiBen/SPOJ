#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int N, a,b, dlugosc;
    string dane,proby;
    getline(cin,proby);
    N = atoi(proby.c_str());
    for(int i=0;i<N;i++)
    {
            getline(cin,dane);
            dlugosc=dane.length();


                for(int c=0;c<dlugosc;c++)
        {
            if(dane[c]==32)
            {
            a = atoi(dane.substr(0,c).c_str());
            b = atoi(dane.substr(c,dlugosc).c_str());
            }
        }
            for(int x=1;x<a*b;x++)
            {
                if(x%a==0&&x%b==0)
                {
                    cout<<x<<endl;
                    x=a*b;
                }

            }
    }

    return 0;
}
