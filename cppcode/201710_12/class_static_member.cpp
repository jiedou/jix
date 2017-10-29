#include <iostream>
using namespace std;
class Test
{
public:
    Test(char c='A')
    {
        this->c=c;
    }
    void show()
    {
        cout<<"a="<<Test::a<<",c="<< c << endl;
    }
private:
    char c;
public:
    static int a;
};
int Test::a=1;

int main()
{
    Test t;
    t.show(); 
    cout<<"Test::a="<<Test::a<<endl;
    return 0;
}
