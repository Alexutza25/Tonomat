#ifndef LABORATOR9_10_OOP_MONEYVALIDATOR_H
#define LABORATOR9_10_OOP_MONEYVALIDATOR_H

#include "InvalidCodeException.h"

class MoneyValidator {
private:
    int firstValidValue;
    int secondValidValue;
    int thirdValidValue;
public:
    MoneyValidator(int firstValue, int secondValue, int thirdValue) :
        firstValidValue(firstValue),
        secondValidValue(secondValue),
        thirdValidValue(thirdValue) {}
    void validate(int value) {
        if (value != firstValidValue && value != secondValidValue && value != thirdValidValue) {
            throw InvalidCodeException("Enter a valid value!!");
        }
    }

};

#endif //LABORATOR9_10_OOP_MONEYVALIDATOR_H
