//
// Created by Heider on 13/10/2019.
//

#ifndef PERSONA_CPROFESOR_H
#define PERSONA_CPROFESOR_H

#include "Tipos.h"

class CProfesor {
private:
    texto nombre;
    texto apellidos;
    entero edad;
    entero horas_dictado;
public:
    const texto &getNombre() const;
    void setNombre(const texto &nombre);
    const texto &getApellidos() const;
    void setApellidos(const texto &apellidos);
    entero getEdad() const;
    void setEdad(entero edad);
    entero getHorasDictado() const;
    void setHorasDictado(entero horasDictado);
};


#endif //PERSONA_CPROFESOR_H
