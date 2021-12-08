#include <iostream>

using namespace std;

int main()
{
    int D,x;
    cin>>D;
    int pow;

    for(int i=0; i<D;i++)
    {
        cin>>x;
        pow = x*x;
        cout<<pow<<endl;
    }
    return 0;
}
