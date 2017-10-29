/* c++中 字面值浮点数默认为double,要想为float加后缀f  */
#include <iostream>
using namespace std;
int main(int argc,char* args[])
{

    cout<<sizeof(1.2)<<endl;
    cout<<sizeof(1.2f)<<endl;

    return 0;
}
