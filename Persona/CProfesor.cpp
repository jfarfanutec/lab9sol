//
// Created by Heider on 13/10/2019.
//

#include "CProfesor.h"

const texto &CProfesor::getNombre() const {
    return nombre;
}

void CProfesor::setNombre(const texto &nombre) {
    CProfesor::nombre = nombre;
}

const texto &CProfesor::getApellidos() const {
    return apellidos;
}

void CProfesor::setApellidos(const texto &apellidos) {
    CProfesor::apellidos = apellidos;
}

entero CProfesor::getEdad() const {
    return edad;
}

void CProfesor::setEdad(entero edad) {
    CProfesor::edad = edad;
}

entero CProfesor::getHorasDictado() const {
    return horas_dictado;
}

void CProfesor::setHorasDictado(entero horasDictado) {
    horas_dictado = horasDictado;
}
