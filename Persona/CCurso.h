#ifndef PERSONA_CCURSO_H
#define PERSONA_CCURSO_H
#include "Tipos.h"

class CCurso {
private:
    texto nombre;
    texto carrera;
    entero creditos;
public:
    CCurso(const texto &nombre, entero creditos);
    const texto &getNombre() const;
    void setNombre(const texto &nombre);
    const texto &getCarrera() const;
    void setCarrera(const texto &carrera);
    entero getCreditos() const;
    void setCreditos(entero creditos);
};


#endif //PERSONA_CCURSO_H
