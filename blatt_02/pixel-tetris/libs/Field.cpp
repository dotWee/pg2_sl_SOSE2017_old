//
// Created by Lukas Wolfsteiner on 11.04.17.
//

#include "Field.h"

int Field::pos_x() {
    return pos.getX();
}

int Field::pos_y() {
    return pos.getY();
}

int Field::size_x() {
    return size.getX();
}

int Field::size_y() {
    return size.getY();
}

// TODO fertig definieren!
char Field::getBuffer(XyPair coord) {
    return 0;
}
