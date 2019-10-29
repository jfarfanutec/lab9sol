#include "Funciones.h"

int main() {
    CAlumno *array = new CAlumno[4]{
        CAlumno("Rut", 40),
        CAlumno("Jorge", 80),
        CAlumno("Maria", 110),
        CAlumno("Evelyn", 20)
    };
    cout<<"El alumno con la mayor cantidad de creditos aprobados:\n";
    CAlumno mayor = buscarElMayor(array, 4);
    cout<<mayor.getNombre()<<", creditos:"<<mayor.getCreditos()<<endl;
    return 0;
}