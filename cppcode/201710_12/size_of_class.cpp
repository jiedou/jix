#include <iostream>
using namespace std;
class Test
{
public:
    Test()
    {
        this->a=0;
        this->b=0;
        this->c=0;
    } 
    
    Test(int a,int b,char c)
    {
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

int main()
{
    Test a(1,2,65);
    a.show();
    cout<<"sizeof(Test)="<<sizeof(Test)<<endl;
    Test *b=new Test();
    b->show(); 
    delete b;
    return 0;
}
