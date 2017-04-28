//
// Created by Lukas Wolfsteiner on 27.04.17.
//

#ifndef PG2_SL_SOSE2017_BOOK_H
#define PG2_SL_SOSE2017_BOOK_H


#include <cstdlib>
#include "Page.h"

#define PAGES 3

class Book {
public:
    void select_book(int page);

    void write(std::string text);

    std::string print();

    void close();

private:
    Page pages[PAGES];
    Page currentpage = pages[0];
};


#endif //PG2_SL_SOSE2017_BOOK_H
