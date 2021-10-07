#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
using namespace std;

class z
{
    private:
            static int instancias;
    public:
        z();
        ~z();
        static int cantidad();
};
int z::instancias=0;
z::z()
{
    instancias++;
}
z::~z()
{
    instancias--;
}
int z::cantidad()
{
    return instancias;
}
int main()
{
    cout<<"cantidad de instancias: "<<z::cantidad()<<endl;
    z *obj1=new z();
    z *obj2=new z();
    cout<<"cantidad de instancias: "<<z::cantidad()<<endl;
    system("PAUSE");
    return 0;
}
