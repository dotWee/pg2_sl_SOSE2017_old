//
// Created by Lukas Wolfsteiner on 27.04.17.
//
#include <string>

#ifndef PG2_SL_SOSE2017_PAGE_H
#define PG2_SL_SOSE2017_PAGE_H

class Page {
public:
    void write(std::string text);

    std::string print();

private:
    std::string buffer;
};


#endif //PG2_SL_SOSE2017_PAGE_H
