//
// Created by Lukas Wolfsteiner on 27.04.17.
//

#include "Page.h"

void Page::write(std::string text) {
    buffer.append(text);
}

std::string Page::print() {
    return buffer;
}
