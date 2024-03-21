#include <cstring>
#include "Drink.h"


/// Constructori
Drink::Drink() {
    id = -1;
    name = "";
    price = -1;
}

Drink::Drink(int newId, string newName, int newPrice) {
    this->id = newId;
    this->price = newPrice;
    this->name = newName;
}

Drink::Drink(const Drink &entity) {
    this->id = entity.id;
    this->name = entity.name;
    this->price = entity.price;
}


/// Setteri si getteri

int Drink::getId() {
    return this->id;
}

void Drink::setId(int newId) {
    this->id = newId;
}

string Drink::getName() {
    return this->name;
}

void Drink::setName(string newName) {
    this->name = newName;
}

int Drink::getPrice() {
    return this->price;
}

void Drink::setPrice(int newPrice) {
    this->price = newPrice;
}


/// Operatori

Drink &Drink::operator=(const Drink &entity) {
    this->id = entity.id;
    this->name = entity.name;
    this->price = entity.price;
    return *this;
}

bool Drink::operator==(const Drink &entity) const {
    return (this->id == entity.id && this->name == entity.name && this->price == entity.price);
}

bool Drink::operator<(const Drink &entity) const {
    return (this->price < entity.price );
}

ostream &operator<<(ostream &os, const Drink &entity) {
    os << entity.id << " " << entity.name << " " << entity.price;
    return os;
}

istream &operator>>(istream &is, Drink &entity) {
    is >> entity.id >> entity.name >> entity.price;
    return is;
}


