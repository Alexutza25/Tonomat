#ifndef LABORATOR9_10_OOP_REPOSITORY_H
#define LABORATOR9_10_OOP_REPOSITORY_H


#include <vector>
#include <algorithm>
#include "Drink.h"
//#include "ElementNotFoundException.h"

template <typename T>
class Repository {
private:
    std::vector<T> entities;
public:
    /// Constructor si Destructor
    Repository();
    ~Repository() = default;

    /// Operatii CRUD
    virtual void addEntity(T&);
    void deleteEntity(T&);
    void updateEntity(T&, T&);
    std::vector<T> getAll();
    int getSize();
    int findEntity(T&);

};

/// Constructor
template <typename T>
Repository<T>::Repository() {}

/// OPERATII CRUD
template <typename T>
void Repository<T>::addEntity(T& entity) {
    entities.push_back(entity);
}

template <typename T>
void Repository<T>::deleteEntity(T& entity) {
    if (findEntity(entity) == -1) {
        throw ElementNotFoundException("The element doesn't exit!!");
    }
    typename std::vector<T>::iterator it;
    it = find(entities.begin(), entities.end(), entity);
    if (it != entities.end()) {
        entities.erase(it);
    }
}

template <typename T>
void Repository<T>::updateEntity(T& entity, T& newEntity) {
    int index = findEntity(entity);
    if (index != -1) {
        entities[index] = newEntity;
    }
}

template <typename T>
std::vector<T> Repository<T>::getAll() {
    return entities;
}

template <typename T>
int Repository<T>::getSize() {
    return entities.size();
}

template <typename T>
int Repository<T>::findEntity(T& entity) {
    for (int i = 0; i < entities.size(); i++) {
        if ((entities[i]) == entity) {
            return i;
        }
    }
    return -1;
}

#endif //LABORATOR9_10_OOP_REPOSITORY_H
