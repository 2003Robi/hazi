#include <iostream>

using namespace std;

int main()
{
    int c=0,n,i=0,e=0,a;
    double f=0,g=0,b=0,d=0;
    cout <<"n= ";
    cin >>n;
    for(i=0; i<n; i++)
    {
        cout<<"a= ";
        cin >>a;
        if (a%2==0)
        {
        b=b+a;
        c=c+1;
        }
        else
        {
        d=d+a;
        e=e+1;
        }
    }
        g=b/c;
        f=d/e;

        cout<<"paros szamok atlaga= "<<g<<endl;
        cout<<"paratlan szamok atlaga= "<<f<<endl;
    return 0;
}
