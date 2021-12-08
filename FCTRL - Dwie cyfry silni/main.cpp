#include <iostream>

using namespace std;

int main()
{
    int D,n,A,B;

    //cin>>D;
        D=3;n=1;
        //D++;

    for(int i=0; i<D; i++)
    {
        //cin>>n;

            n++;

        if(n==0||n==1)
        {
            A=1;
            B=0;
            // cout<<"0 1"<<endl;
        }
        else if (n==2)
        {
            A=2;
            B=0;
            //cout<<"0 2";
        }
        else if (n==3)
        {
            A=6;
            B=0;
            // cout<<"0 6";
        }
        else if (n==4)
        {
            A=4;
            B=2;
            // cout<<"4 2";
        }
        else if (n==5||n==6)
        {
            A=0;
            B=2;
            // cout<<"2 0";
        }
        else if (n==7)
        {
            A=0;
            B=4;
            //cout<<"4 0";

        }
        else if (n==8)
        {
            A=0;
            B=2;
            //cout<<"2 0";
        }
        else if (n==9)
        {
            A=0;
            B=8;
            //cout<<"8 0";
        }
        else
        {
            A=0;
            B=0;
            //cout<<"0 0";
        }
        cout<<B<<" "<<A<<endl;

    }
    return 0;
}
