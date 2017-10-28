#include <iostream>
using namespace std;
class Test
{
public:
    Test()
    {
        cout<<"Test() is called"<<endl;
        this->a=0;
        this->b=0;
        this->c=0;
    } 
   
    Test(int a,int b,char c)
    {
        cout<<"Test(int a,int b,int c) is called"<<endl;
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void show()
    {

        cout<<"a="<<this->a<<",b="<<this->b<<",c="<<this->c<<endl;
    }
private:
    int a;
    int b;
    char c;
};

void f()
{
    static Test t1;
    static Test t2(1,2,65);
}


int main()
{
    f(); 
    f(); 
    f(); 
    return 0;
}
