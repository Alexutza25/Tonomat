#include <cassert>
#include "Tests.h"
#include "Drink.h"
#include "Repository.h"
#include "Service.h"

void tests() {
    entityTests();
    repoTests();
    serviceTests();
    moneyServiceTest();
}

void entityTests() {
    Drink entity1 = Drink(1, "name1", 100);
    Drink entity2 = Drink(2, "name2", 300);
    assert(entity1.getId() == 1);
    assert(entity2.getName() == "name2");
    assert(entity1.getPrice() == 100);
    entity1.setName("testSetName");
    assert(entity1.getName() == "testSetName");
    entity2.setId(3);
    assert(entity2.getId() == 3);
    entity1.setPrice(400);
    assert(entity1.getPrice() == 400);
    entity1 = entity2;
    assert(entity1.getPrice() == 300);
    assert(entity1.getName() == "name2");
    assert(entity1 == entity2);
    Drink entity3 = Drink(2, "aaa", 100);
    assert(entity3 < entity1);
    cout << "All entity tests passed!" << endl;
}

void repoTests() {
    RepositoryFile<Drink> repo("C:\\Users\\alexa\\OneDrive\\Desktop\\lab OOP\\Laborator_9-10(+11 & 12)_poo\\Laborator9-10-OOP\\test.txt");

    // Test add
    Drink e1(1, "name1", 100);
    repo.addEntity(e1);
    assert(repo.getSize() == 1);

    // Test findEntity
    Drink e2(2, "name2", 200);
    repo.addEntity(e2);
    assert(repo.findEntity(e2) == 1);

    // Test update
    Drink e2_new(2, "name2_new", 300);
    repo.updateEntity(e2, e2_new);
    assert(repo.getAll()[1] == e2_new);

    // Test delete
    repo.deleteEntity(e1);
    assert(repo.getSize() == 1);
    assert(repo.findEntity(e1) == -1);

    // Test getAll
    vector<Drink> entities = repo.getAll();
    assert(entities.size() == 1);
    assert(entities[0] == e2_new);

    cout << "All repo tests passed!" << endl;
}

void serviceTests() {
    RepositoryFile<Drink> entity("C:\\Users\\alexa\\OneDrive\\Desktop\\lab OOP\\Laborator_9-10(+11 & 12)_poo\\Laborator9-10-OOP\\testService.txt");
    RepositoryFile<Money> money("C:\\Users\\alexa\\OneDrive\\Desktop\\lab OOP\\Laborator_9-10(+11 & 12)_poo\\Laborator9-10-OOP\\testService.txt");

    Service service(entity, money);

    // Test add
    service.add(1, "name1", 100);
    assert(service.size() == 1);

    // Test findEntity
    assert(service.find(1, "name1", 100) == 0);

    // Test update
    service.update(1, "name1", 100, 2, "name2", 200);
    assert(service.getAll()[0].getId() == 2);

    // Test delete
    service.remove(2, "name2", 200);
    assert(service.size() == 0);

    service.add(1, "name1", 100);
    service.add(2, "name2", 50);
    vector<Drink> sortEntities = service.filterByPrice();
    assert(sortEntities[0].getId() == 2);

    cout << "All service tests passed!" << endl;
}

void moneyServiceTest() {
    RepositoryFile<Drink> entity("C:\\Users\\alexa\\OneDrive\\Desktop\\lab OOP\\Laborator_9-10(+11 & 12)_poo\\Laborator9-10-OOP\\testService.txt");
    RepositoryFile<Money> money("C:\\Users\\alexa\\OneDrive\\Desktop\\lab OOP\\Laborator_9-10(+11 & 12)_poo\\Laborator9-10-OOP\\moneyServiceTest.txt");

    Service service(entity, money);
    service.addMoney(1, 10);
    service.addMoney(5, 20);
    service.addMoney(10, 80);
    service.deleteMoney(5, 20);

    cout<<"All money service tests passed!"<<endl;
}