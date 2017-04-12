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

// TODO Stone zufällig generieren
Stone::Stone() {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            buffer[i][j] = ' ';
        }
    }

    buffer[2][2] = 'X';
    buffer[2][3] = 'X';
    buffer[3][2] = 'X';
    buffer[3][3] = 'X';
}