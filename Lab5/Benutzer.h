#pragma once
#ifndef LAB5_BENUTZER_H
#define LAB5_BENUTZER_H

#include "Film.h"
#include <vector>
#include "Repository.h"

class Benutzer {
    vector<Film> watchlist;
    Repository repo;
public:
    
    int size() { return watchlist.size(); };

    //see the genre
    void view_genre(const string& genre);

    //choose a film to watch
    void watch(const string& titel, int jahr);
};


#endif //LAB5_BENUTZER_H
