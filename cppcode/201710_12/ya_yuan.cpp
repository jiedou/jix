#include <iostream>
using namespace std;
void f(int a,int)
{
    cout<<"f(int a,int)"<<endl;
    cout<<a<<endl;
}
void f(int a)
{
    cout<<"f(int a)"<<endl;
    cout<<a<<endl;
}
int main()
{
    f(1);
    f(2,1); 
    return 0;
}
