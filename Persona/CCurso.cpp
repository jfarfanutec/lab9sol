//
// Created by heider on 15/10/2019.
//

#include "CCurso.h"

CCurso::CCurso(const texto &nombre, entero creditos) : nombre(nombre), creditos(creditos) {

}

const texto &CCurso::getNombre() const {
    return nombre;
}

void CCurso::setNombre(const texto &nombre) {
    CCurso::nombre = nombre;
}

const texto &CCurso::getCarrera() const {
    return carrera;
}

void CCurso::setCarrera(const texto &carrera) {
    CCurso::carrera = carrera;
}

entero CCurso::getCreditos() const {
    return creditos;
}

void CCurso::setCreditos(entero creditos) {
    CCurso::creditos = creditos;
}


