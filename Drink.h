#ifndef LABORATOR9_10_OOP_ENTITY_H
#define LABORATOR9_10_OOP_ENTITY_H

#include <string>
#include "iostream"

using namespace std;


class Drink {
private:
    int id;
    string name;
    int price;
public:
    /// Constructor si destructor
    Drink();
    Drink(int, string, int);
    Drink(const Drink&);
    ~Drink() = default;

    /// Getteri si setteri
    int getId();
    void setId(int);
    string getName();
    void setName(string);
    int getPrice();
    void setPrice(int);

    /// Operatori
    Drink& operator=(const Drink&);
    bool operator==(const Drink&) const;
    bool operator<(const Drink&) const;
    string toString();
    friend ostream& operator<<(ostream& os, const Drink& entity);
    friend istream& operator>>(istream& is, Drink& entity);

};


#endif //LABORATOR9_10_OOP_ENTITY_H
