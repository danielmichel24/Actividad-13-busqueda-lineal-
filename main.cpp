#include <iostream>
#include "arreglo.h"
#include "Computadora.h"
using namespace std;

int main()
{
    Arreglo<Computadora> computadoras;

    Computadora c01("Linux", "Asus", 24, 500);
    Computadora c02("MacOs", "Apple", 32, 1000);
    Computadora c03("Windows 10", "Hp", 12, 2000);
    Computadora c04("Windows 8.1", "vaio", 28, 1500);


    
    
    computadoras << c01 << c02 << c03 << c02 << c02 << c04;
    Computadora c05("MacOs", "apple 2", 8, 500);

    Arreglo<Computadora*> ptrs = computadoras.buscar_todos(c05);
    
    if (ptrs.size() > 0){
        for (size_t i = 0; i < ptrs.size(); i++)
        {
            Computadora *p = ptrs[i];
            cout << *p << endl;
        }
        
    }
    else{
        cout << "No existen coincidencias"<< endl;
    }
   
    Computadora *ptr = computadoras.buscar(c05);
    
    if (ptr != nullptr){
        cout << *ptr << endl;
    }
    else
    {
        cout << "no existe" << endl;
    }
    /*Arreglo<int> arreglo;

    for(int i = 0; i < 10; i++){
        arreglo.insertar_final(i);
    }

    arreglo.insertar(100, 2);
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(4);
    for(size_t i = 0; i < arreglo.size(); i++){
        cout << float(arreglo[i]) << " ";
    }
    cout << endl;

    int *v = arreglo.buscar(2);
    cout << v << " " << *v << endl;
    *v = 20;
    for(size_t i = 0; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }
    
    cout << endl;*/


    return 0;
}