#include <iostream>

using namespace std;

int main()
{
    int t, c, k,w;

    cin>>t;

    for(int i=0; i<t;i++)
    {
        cin>>c;
        cin>>k;
        cin>>w;
        if(c*w<=k)
            cout<<"yes"<<endl;
            else cout<<"no"<<endl;
    }

    return 0;
}
