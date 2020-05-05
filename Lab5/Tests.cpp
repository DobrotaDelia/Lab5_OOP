#include "Repository.h"
#include "Benutzer.h"
#include "Administrator.h"
#include <assert.h>
#include <iostream>

void Teste() {
    std::cout << "\nTest START\n\n";
    Film film("T11", "orice", 1970, 110, "www.facebook.com");
    Repository r1;
    assert(r1.size() == 10);
    Administrator r2;
    assert(r2.size() == 10);
    r2.add_film(film);
    assert(r2.size() == 11);
    film.setjahr(1971);
    r2.add_film(film);
    assert(r2.size() == 12);
    r2.delete_film("T11", 1971);
    assert(r2.size() == 11);
    std::cout << "\nTest END\n\n";


}
