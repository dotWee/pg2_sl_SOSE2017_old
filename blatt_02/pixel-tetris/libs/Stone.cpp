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

char Stone::getBuffer(XyPair coord) {
    return buffer[coord.getY()][coord.getX()];
}

// TODO Stone zufällig generieren
Stone::Stone() {
    for (int i = 0; i < STONE_DIMENSION_DEFAULT; ++i) {
        for (int j = 0; j < STONE_DIMENSION_DEFAULT; ++j) {
            buffer[i][j] = ' ';
        }
    }

    buffer[2][2] = 'X';
    buffer[2][3] = 'X';
    buffer[3][2] = 'X';
    buffer[3][3] = 'X';
}