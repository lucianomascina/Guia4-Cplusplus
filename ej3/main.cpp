#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
using namespace std;

class z
{
    private:
        static string nombre;
    public:
        static string devolver();
};
string z::devolver()
{
    return "z";
}

int main()
{
    cout<<"nombre de la clase: "<<z::devolver()<<endl;
    system("PAUSE");
    return 0;
}
