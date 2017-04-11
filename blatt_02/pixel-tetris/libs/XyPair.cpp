//
// Created by Lukas Wolfsteiner on 11.04.17.
//

#include "XyPair.h"

int XyPair::getX() const {
    return x;
}

void XyPair::setX(int x) {
    XyPair::x = x;
}

int XyPair::getY() const {
    return y;
}

void XyPair::setY(int y) {
    XyPair::y = y;
}

XyPair::XyPair(int x, int y) : x(x), y(y) {}
