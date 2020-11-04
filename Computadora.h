#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include <iostream>
#include <iomanip> 

using namespace std;

class Computadora
{
private:
    string so; //so=sistema operativo
    string marca;
    int ram;
    int rom;
public:
    Computadora();
    Computadora(const string &so,
              const string &marca,
              int ram,
              int rom);
    void setSo(const string &v);
    string getSo();
    void setMarca(const string &v);
    string getMarca();
    void setRam(int v);
    int getRam();
    void setRom(int v);
    int getRom();

    friend ostream& operator<<(ostream &out, const Computadora &c)
    {
        out << left;
        out << setw(10) << c.so;
        out << setw(10) << c.marca;
        out << setw(10) << c.ram;
        out << setw(10) << c.rom;
        out << endl;
        
        return out;
    }

    friend istream& operator>>(istream &in, Computadora &c)
    {
        //string temp;
        //int ram;
        //int rom;
        fflush(stdin);

        
        cout << "SO: ";
        getline(cin, c.so);


        cout << "Marca: ";
        getline(cin, c.marca);

        
        cout << "Ram: ";
        cin >> c.ram;
        
        cout << "Rom: ";
        cin >> c.rom;

        return in;
    }

    bool operator==(const Computadora& p)
    {
        return so == p.so;
    }
    bool operator==(const Computadora& p) const
    {
        return so == p.so;
    }


};



#endif // COMPUTADORA_H
