#include <iostream>
#include "CAlumno.h"
#include "CProfesor.h"
#include "CCurso.h"

template <typename T>
void mostrarDatosBasicos(T* objeto)
{
    cout<<"--------\n";
    cout<<"Nombre: "<<objeto->getNombre()<<endl;
    cout<<"Apellidos: "<<objeto->getApellidos()<<endl;
    cout<<"Edad: "<<objeto->getEdad()<<endl;
}

template <typename T>
void pedirDatosBasicos(T* objeto)
{
    cout<<"--------\n";
    texto temps; entero tempe;
    cout<<"Nombre: ";
    getline(cin, temps); objeto->setNombre(temps);
    cout<<"Apellidos: ";
    getline(cin, temps); objeto->setApellidos(temps);
    cout<<"Edad: ";
    cin>>tempe; objeto->setEdad(tempe);
    cin.ignore();
}

template <typename T>
T buscarElMayor(T *array, int n)
{
    T mayor = array[0];
    for (int i = 1; i < n; ++i) {
        if(array[i].esMayorDe(mayor))
            mayor = array[i];
    }
    return mayor;
}
