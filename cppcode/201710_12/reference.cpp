#include <iostream>
using namespace std;
int main()
{
    int a=1;
    int &b=a;
    int c=b;
    b=2;
    cout<<"a="<<a<<",b="<<b<<",c="<<c<<endl;
    
    int d[]={1,2,3,4,5};
    int(&e)[5]=d;
    for(int i=0;i<sizeof(d)/sizeof(d[0]);i++)
    {
        e[i]=e[i]*10+e[i];
    }    
    for(int i=0;i<sizeof(d)/sizeof(d[0]);i++)
    {
        cout<<d[i]<<endl;
    }    
    return 0;
}
