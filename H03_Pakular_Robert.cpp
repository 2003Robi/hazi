#include <iostream>

using namespace std;

int main()
{
    int a,b,x,d,x1,k,c,f;
    cout <<"kerem az intervallum ket vegpontjat "<<endl;
    cin >>a>>b;
    for(x=a ; x<=b ; x++)
    {
        x1=x;
        k=0;
        for(d=1 ; d<=x ; d++)
            if(x%d==0)
            k++;
        f=0;
        while(x1!=0)
        {
            c=x1%10;
            f=f*10+c;
            x1=x1/10;

        }
        if (f==x && k==2)
            cout <<x<<endl;

    }


    return 0;
}
