//
// Created by Heider on 13/10/2019.
//

#ifndef PERSONA_CALUMNO_H
#define PERSONA_CALUMNO_H

#include "Tipos.h"
#include "CCurso.h"

class CAlumno {
private:
    texto nombre;
    texto apellidos;
    entero edad;
    entero creditos;
public:
    CAlumno(){}
    CAlumno(const texto &nombre, entero creditos);
    const texto &getNombre() const;
    void setNombre(const texto &nombre);
    const texto &getApellidos() const;
    void setApellidos(const texto &apellidos);
    entero getEdad() const;
    void setEdad(entero edad);
    entero getCreditos() const;
    void setCreditos(entero creditos);
    void aprobar(CCurso &curso);
    bool esMayorDe(CAlumno &otro);
};


#endif //PERSONA_CALUMNO_H
