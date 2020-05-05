#pragma once
#ifndef LAB5_REPOSITORY_H
#define LAB5_REPOSITORY_H

#include "Film.h"
#include <vector>
/**
 * Repository
 */
class Repository {      
    vector<Film> filme{ Film("T1", "sadic", 1970, 100, "https://www.youtube.com/watch?v=DMEu-1CIB_I"), //used the same link, my internet connection is weak and it did not load other urls
                       Film("T2", "action", 1970, 100, "https://www.youtube.com/watch?v=yBWyKRoh98U"),
                       Film("T3", "comedy", 1970, 100, "https://www.youtube.com/watch?v=yBWyKRoh98U"),
                       Film("T4", "action", 1970, 100, "https://www.youtube.com/watch?v=yBWyKRoh98U"),
                       Film("T5", "action", 1970, 100, "https://www.youtube.com/watch?v=yBWyKRoh98U"),
                       Film("T7", "action", 1970, 100, "https://www.youtube.com/watch?v=yBWyKRoh98U"),
                       Film("T8", "action", 1970, 100, "https://www.youtube.com/watch?v=yBWyKRoh98U"),
                       Film("T6", "action", 1970, 100, "https://www.youtube.com/watch?v=yBWyKRoh98U"),
                       Film("T9", "action", 1970, 100, "https://www.youtube.com/watch?v=yBWyKRoh98U"),
                       Film("T10", "action", 1970, 100, "https://www.youtube.com/watch?v=yBWyKRoh98U"),

    };
public:
    int size() { return filme.size(); };
    
    friend class Administrator;
    
    friend class Benutzer;
};


#endif //LAB5_REPOSITORY_H
