#include "Money.h"

///Constructori
Money::Money() {
    this->value = -1;
    this->type = 0;
}

Money::Money(int value, int type) : value(value), type(type) {}


/// Setteri si getteri
int Money::getValue() const {
    return value;
}

void Money::setValue(int value) {
    this->value = value;
}

int Money::getType() const {
    return type;
}

void Money::setType(int type) {
    this->type = type;
}


/// Operatori
bool Money::operator <(const Money& money) const {
    return value < money.value;
}

Money Money::operator *(int scalar) const {
    return Money(value * scalar, type);
}

bool Money::operator==(const Money &money) const {
    return (this->value == money.value && this->type == money.type);
}

ostream& operator<<(ostream& os, const Money& money) {
    os << money.type << " " << money.value;
    return os;
}

istream &operator>>(istream &is, Money &money) {
    is >> money.type >> money.value;
    return is;
}
