#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
using namespace std;

class vehiculo
{
    private:
            string color;
            double precio;
            static double descuento;
    public:
            vehiculo(string,double);
            void setcolor(string);
            string getcolor();
            void setprecio(double);
            double getprecio();
            void calculardescuento();
            void modificadescuento(double);
};
vehiculo::vehiculo(string c,double p)
{
    this->color=c;
    this->precio=p;
}
double vehiculo::descuento=0.20;
void vehiculo::setcolor(string c)
{
    this->color=c;
}
string vehiculo::getcolor()
{
    return this->color;
}
void vehiculo::setprecio(double p)
{
    this->precio=p;
}
double vehiculo::getprecio()
{
    return this->precio;
}
void vehiculo::calculardescuento()
{
    precio=precio*(1-descuento);
}
void vehiculo::modificadescuento(double desc)
{
    descuento=desc;
}
class moto : public vehiculo
{
    private:
            int cilindrada;
            string patente;
    public:
            moto(string,double,int,string);
            void setcilindrada(int);
            int getcilindrada();
            void setpatente(string);
            string getpatente();
};
moto::moto(string color,double precio,int cil,string pat): vehiculo(color,precio)
{
    this->cilindrada=cil;
    this->patente=pat;
}
void moto::setcilindrada(int c)
{
    this->cilindrada=c;
}
int moto::getcilindrada()
{
    return this->cilindrada;
}
void moto::setpatente(string p)
{
    this->patente=p;
}
string moto::getpatente()
{
    return this->patente;
}

class autos : public vehiculo
{
    private:
            int cantpuertas;
            string motor;
            string patente;
    public:
            autos(string ,double,int,string,string);

};
autos::autos(string col,double pre,int puertas,string mot,string pat):vehiculo(col,pre)
{
    this->cantpuertas=puertas;
    this->motor=mot;
    this->patente=pat;
}
class camion : public vehiculo
{
    private:
            int cantruedas;
            int tara;
    public:
};

int main()
{
    moto *m=new moto("rojo",20000,500,"abg 300");
    autos *a=new autos("azul",100500,5,"v6","zzz 123");

    cout<<m->getprecio()<<endl;
    m->calculardescuento();
    cout<<m->getprecio()<<endl;
    m->modificadescuento(0.5);
    m->calculardescuento();
    cout<<m->getprecio()<<endl;

    cout<<a->getprecio()<<endl;
    a->calculardescuento();
    cout<<a->getprecio()<<endl;
    return 0;
}
