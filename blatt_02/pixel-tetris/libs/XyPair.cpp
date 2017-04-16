//
// Created by Lukas Wolfsteiner on 11.04.17.
//

#include "XyPair.h"

int XyPair::getX() {
    return x;
}

void XyPair::setX(int x) {
    XyPair::x = x;
}

int XyPair::getY() {
    return y;
}

void XyPair::setY(int y) {
    XyPair::y = y;
}

XyPair::XyPair(int x, int y) : setX(x), setY(y) {}