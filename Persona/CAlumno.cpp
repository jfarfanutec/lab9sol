//
// Created by Heider on 13/10/2019.
//

#include "CAlumno.h"

CAlumno::CAlumno(const texto &nombre, entero creditos) : nombre(nombre), creditos(creditos) {

}

const texto &CAlumno::getNombre() const {
    return nombre;
}

void CAlumno::setNombre(const texto &nombre) {
    CAlumno::nombre = nombre;
}

const texto &CAlumno::getApellidos() const {
    return apellidos;
}

void CAlumno::setApellidos(const texto &apellidos) {
    CAlumno::apellidos = apellidos;
}

entero CAlumno::getEdad() const {
    return edad;
}

void CAlumno::setEdad(entero edad) {
    CAlumno::edad = edad;
}

entero CAlumno::getCreditos() const {
    return creditos;
}

void CAlumno::setCreditos(entero creditos) {
    CAlumno::creditos = creditos;
}

void CAlumno::aprobar(CCurso &curso){
    this->creditos += curso.getCreditos();
}

bool CAlumno::esMayorDe(CAlumno &otro)
{
    return CAlumno::creditos > otro.creditos;
}

