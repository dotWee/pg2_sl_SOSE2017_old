//
// Created by Lukas Wolfsteiner on 11.04.17.
//

#include "Stone.h"

int Stone::pos_x() {
    return pos.getX();
}

int Stone::pos_y() {
    return pos.getY();
}

int Stone::size_x() {
    return size.getX();
}

int Stone::size_y() {
    return size.getY();
}

// TODO fertig definieren!
char Stone::getBuffer(XyPair coord) {
    return 0;
}
