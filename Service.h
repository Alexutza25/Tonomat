#ifndef LABORATOR9_10_OOP_SERVICE_H
#define LABORATOR9_10_OOP_SERVICE_H

#include "Repository.h"
#include "RepositoyFile.h"
#include "Money.h"
#include "Drink.h"

class Service {
private:
    RepositoryFile<Drink> EntityRepo;
    RepositoryFile<Money> MoneyRepo;
public:
    /// Constructor si destructor
    Service();
    Service(RepositoryFile<Drink> &, RepositoryFile<Money> &);
    ~Service() = default;

    /// Operatii CRUD
    void add(int, string, int);
    void addMoney(int type, int value);
    void remove(int, string, int);
    void deleteMoney(int type, int value);
    void update(int, string, int, int, string, int);
    void updateMoney(int type, int value);
    int find(int, string, int);
    vector<Drink> getAll();

    /// Functionalitati si metode ajutatoare
    vector<Drink> filterByPrice();
    Drink getTopDrink();
    int size();

};


#endif //LABORATOR9_10_OOP_SERVICE_H
