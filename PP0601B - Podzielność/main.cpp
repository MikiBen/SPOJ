#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int z,a,dlugosc;
    int n,x,y;
    string t,dane;
    int spacja[2];

    getline(cin,t);
    z=atoi(t.c_str());
    for(int i=0;i<z;i++)
{
            getline(cin,dane);
            dlugosc = dane.length();
            a=0;
                    for(int b=0;b<dlugosc;b++)
                {
                    if(dane[b]==32)
                    {
                        spacja[a]=b;
                        a++;
                    }
                }
                    n = atoi(dane.substr(0,spacja[0]).c_str());
                    x = atoi(dane.substr(spacja[0],spacja[1]).c_str());
                    y = atoi(dane.substr(spacja[1],dlugosc).c_str());

                for(int c=1;c<=n;c++)
                {
                    if(c%x==0&&c%y!=0)
                        cout<<c<<" ";
                }
                cout<<endl;
}

return 0;
}
