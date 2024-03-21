#include "Tests.h"
#include "UI.h"
#include "Drink.h"
#include "Money.h"

//De la un tonomat de bauturi, se pot cumpăra diferite produse (cappuccino, ciocolată calda, latte, etc.). Fiecare
//produs este identificat prin id, nume și preț. Un client poate achizitiona un produs folosind doar
//bancnote de anumite valori. Dacă clientul introduce o bancnota de X lei, solicită un produs de Y lei,
//tonomatul îi va putea da rest (X - Y lei) doar dacă dispune de această sumă în bancnote de valori
//corespunzătoare. Dezvoltați o aplicație care să permită achiziția unui produs.

int main() {
    tests();
    cout<<endl;
    RepositoryFile<Drink> entity("C:\\Users\\alexa\\OneDrive\\Desktop\\lab OOP\\Laborator_9-10(+11 & 12)_poo\\Laborator9-10-OOP\\drink.txt");
    RepositoryFile<Money> money("C:\\Users\\alexa\\OneDrive\\Desktop\\lab OOP\\Laborator_9-10(+11 & 12)_poo\\Laborator9-10-OOP\\money.txt");
    Service service(entity, money);
    UI ui(service);
    ui.menu();
    return 0;
}
