#ifndef REPOSITORYFILE_H
#define REPOSITORYFILE_H

#include <fstream>
#include "Repository.h"

template <typename T>
class RepositoryFile : public Repository<T>{
protected:
    string fileName;
public:
    /// Constructori
    RepositoryFile() : Repository<T>() {}
    RepositoryFile<T>(string fileName) : fileName(fileName) {};

    /// Citire si afisare din fisier
    void loadFromFile();
    void saveToFile();

    /// Operatii CRUD
    void addEntity(T& entity) {
        Repository<T>::addEntity(entity);
        saveToFile();
    }

    void deleteEntity(T& entity) {
        Repository<T>::deleteEntity(entity);
        saveToFile();
    }

    void updateEntity(T& entity, T& newEntity) {
        Repository<T>::updateEntity(entity, newEntity);
        saveToFile();
    }
};


/// Citire si afisare din fisier

template <typename T>
void RepositoryFile<T>::loadFromFile() {
    std::ifstream f(fileName, std::ios::out);
    if (!f.is_open()) {
        std::cerr << "Eroare la deschiderea fisierului " << fileName << "!" << std::endl;
        return;
    }
    std::vector<T> entities = Repository<T>::getAll();
    for (auto ent: entities) {
        Repository<T>::deleteEntity(ent);
    }
    T entity;
    while(f >> entity) {
        Repository<T>::addEntity(entity);
    }
    f.close();
}


template <typename T>
void RepositoryFile<T>::saveToFile() {
    std::ofstream f(fileName);
    if (!f.is_open()) {
        std::cerr << "Eroare la deschiderea fisierului " << fileName << "!" << std::endl;
        return;
    }
    std::vector<T> entities = Repository<T>::getAll();
    for (auto it : entities) {
        f << it << "\n";
        f.flush();
    }
    f.close();
}

#endif // REPOSITORYFILE_H
