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

#define LEN(x) sizeof(x)/sizeof(x[0])

int main()
{
    int i;  
    Test test[]=
    {
       Test(),
       Test(1,2,65),
       Test(1,5,66),
       Test(1,4,67),
    };
    
    for(i=0;i<LEN(test);i++)
    {
        test[i].show();
    } 
    return 0;
}
