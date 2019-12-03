#include <iostream>

using namespace std;

int main()
{
    int a,b=0,c;
    cout<<"kerem a szamot "<<endl;
    cin >>a;
    while (a!=0)
    {
        c=a%10;
        if(a%2!=0)
        {
        b=b*10+c;
        b=b*10+(c-1);
        }
        else
        b=b*10+c;

    a=a/10;
    }
    cout <<b<<endl;
    return 0;
}
