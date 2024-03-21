#ifndef LABORATOR9_10_OOP_UI_H
#define LABORATOR9_10_OOP_UI_H

#include "Service.h"

class UI {
private:
    /// OPERATII CRUD
    Service service;
    void add();
    void remove();
    void update();
    void find();
    void getAll();
public:
    /// Constructor si destructor
    UI();
    UI(Service &);
    ~UI();

    /// Interfata
    void adminMenu();
    void userMenu();
    void menu();

    /// Functionalitati
    void filterByPrice();
    void topDrink();
};


#endif //LABORATOR9_10_OOP_UI_H
