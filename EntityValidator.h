#ifndef LABORATOR9_10_OOP_ENTITYVALIDATOR_H
#define LABORATOR9_10_OOP_ENTITYVALIDATOR_H

#include "InvalidCodeException.h"

class EntityValidator{
private:
    int validId;
public:
    EntityValidator(int id) : validId(id) {}
    void validate (int id) {
        if (id < validId) {
            throw InvalidCodeException("The given id already exists!!");
        }
    }
};

#endif //LABORATOR9_10_OOP_ENTITYVALIDATOR_H
