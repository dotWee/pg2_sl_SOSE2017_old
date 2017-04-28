//
// Created by Lukas Wolfsteiner on 27.04.17.
//

#include "Book.h"

void Book::close() {
    free(pages);
    exit(0);
}

std::string Book::print() {
    return currentpage.print();
}

void Book::select_book(int page) {
    currentpage = pages[page];
}

void Book::write(std::string text) {
    currentpage.write(text);
}
