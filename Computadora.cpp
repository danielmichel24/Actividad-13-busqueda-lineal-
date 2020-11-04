#include "Computadora.h"

Computadora::Computadora()
{
    //ctor
}

Computadora::Computadora(const string &so,
              const string &marca,
              int ram,
              int rom)
{
    this->so = so;
    this->marca = marca;
    this->ram = ram;
    this->rom = rom;
}

void Computadora::setSo(const string &v)
{
    so = v;
}

string Computadora::getSo()
{
    return so;
}

void Computadora::setMarca(const string &v)
{
    marca = v;
}

string Computadora::getMarca()
{
    return marca;
}

void Computadora::setRam(int v)
{
    ram = v;
}

int Computadora::getRam()
{

    return ram;
}

void Computadora::setRom(int v)
{
    rom = v;
}
int Computadora::getRom()
{
    return rom;
}


