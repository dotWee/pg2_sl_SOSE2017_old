//
// Created by Lukas Wolfsteiner on 27.04.17.
//

#ifndef PG2_SL_SOSE2017_NOTEPAD_H
#define PG2_SL_SOSE2017_NOTEPAD_H

#include "Book.h"

#define BUFFER_SIZE 100

class Notepad {
public:
    void notepad_run();

private:
    char buffer[BUFFER_SIZE];
    int currentpage;
    Book book;

    void notepad_create();

    void notepad_write(char *str);

    void notepad_debug();

    std::string notepad_read();
};


#endif //PG2_SL_SOSE2017_NOTEPAD_H
